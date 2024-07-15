//this file is adapted from https://pastebin.com/UFzveurA by Tamzin Davies
#ifndef PARSER_H
#define PARSER_H


#include "important.h"
#include "xstring.h"
#include "lookAt.h"

bool parser(int &loc, string wd1, string wd2, string wd3, string wd4, word *dir, word *vbs, room *rms, noun *nns)
{
    static bool door_state = false; // false is a closed door.
    
    int i;
    for(i = 0; i < DIRS; i++)
    {
        if(wd1 == dir[i].word)
        {
            if(rms[loc].exits_to_room[dir[i].code] != NONE)
            {
                loc = rms[loc].exits_to_room[dir[i].code];
                cout << rms[loc].description << endl;// prints current room description
                
                if(loc == room1|| loc == hallway)
                {
                    nns[ROOM1_DOOR].location = loc;
                }
                return true;
            }
            else
            {
                cout << no_exit << endl;//prints "No exit that way"
                return true;
            }
        }
    }
    
    int NOUN_MATCH = NONE;
     // Handle verbs. As a reference, here are the verbs I am using in the game.
        // enum en_VERBS {PICK_UP, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
    int VERB_ACTION = NONE;
    
    for(i = 0; i < VERBS; i++)
    {
        if(wd1 == vbs[i].word)
        {
            VERB_ACTION = vbs[i].code;
            break;
        }
    }
    
    if(wd2 != "")
    {
        for(i = 0; i < NOUNS; i++)
        {
            if(wd2 == nns[i].word)
            {
                NOUN_MATCH = nns[i].code;
                break;
            }
        }
    }
    
    // THIS SECTION OF CODE WAS CREATED BY TAMZIN DAVIES
    if(wd1 == "LOOK" && wd2 == "AT") // this section will return a a specific item description.
    {
        look_at(loc, rms, dir, nns, wd3);
        return true;
    }
    // END SECTION
    
    
    //ADDED "QUIT" 
    if(wd1 == "EXIT"| wd1 == "QUIT")
    {
        return 0;// ends the function before terminal can print "No valid command entered" if player decides to quit
    }
    
   
    if(VERB_ACTION == NONE)
    {
        cout << bad_com << endl;// prints "no valid command entered"
        return true;
    }
    
    // THIS SECTION OF CODE WAS CREATED BY TAMZIN DAVIES
    if (wd1 == "PICK")
    {
        if(NOUN_MATCH == LAB_BOOK)
        {
            cout << pick_up << nns[LAB_BOOK].description << endl;// prints "you have picked up a heavy bound spell book"
        }
        if(NOUN_MATCH == INVIS_POTION)
        {
            cout << pick_up <<nns[INVIS_POTION].description <<endl; //prints "you have picked up A glass vial full of invisibility potion"
        }
    }
    // END SECTION
    
    if(VERB_ACTION == OPEN)
    {
        if(NOUN_MATCH == ROOM1_DOOR)
        {
            if(loc == room1 || loc == hallway)
            {
                if(door_state == false)
                {
                    door_state = true;
                    rms[room1].exits_to_room[NORTH] = hallway;
                    rms[hallway].exits_to_room[SOUTH] = room1;
                    nns[ROOM1_DOOR].description.clear();
                    nns[ROOM1_DOOR].description.assign(door_desc);
                    cout << door_open << endl;// prints "you opened the door"
                    return true;
                }
                else if(door_state == true)
                {
                    cout << door_already_open << endl;//prints "door is already open"
                    return true;
                }
            }
            else
            {
                cout << no_door << endl;// prints "there is no door there"
                return true;
            }
        }
        else
        {
            cout << cant_open << endl;// prints "cant open it"
            return true;
        }
    }
    
    return false;
}
#endif

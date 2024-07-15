//this file is adapted from https://pastebin.com/UFzveurA by Tamzin Davies
#include "directions.h"
#include "verbs.h"
#include "rooms.h"
#include "nouns.h"
#include "command.h"
#include "parser.h"
#include "important.h"
#include "xstring.h"
#include "lookAt.h"
#include <string>

 
int main()
{
    string command;
    string word_1;
    string word_2;
    string word_3;
    string word_4;
 
    room rooms[ROOMS];
    set_rooms(rooms);
 
    word directions[DIRS];
    set_directions(directions);
    
    word verbs[VERBS];
    set_verbs(verbs);
    
    noun nouns[NOUNS];
    set_nouns(nouns);
 
    int location = room1; // using the enumerated type identifier, of course.
    cout << room1_desc << endl;// prints first room description
    cout << prompt;// prints "what would you like to do" to terminal
   
    while(word_1 != "QUIT" && word_1 != "EXIT")// ADDED EXIT
    {
        command.clear();
        getline(cin, command);
        
 
        word_1.clear();
        word_2.clear();
 
        // Call the function that handles the command line format.
        section_command(command, word_1, word_2, word_3, word_4);
       
        // Call the parser.
         parser(location, word_1, word_2, word_3, word_4, directions, verbs, rooms, nouns);
       
    }
    if(word_1 =="QUIT"| word_1 =="EXIT")//ADDED EXIT
    {
        cout<< see_ya << endl;//prints "Goodbye!" to terminal if player quits game
    }
    return 0;
}

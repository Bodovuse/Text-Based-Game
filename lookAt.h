//this file is by Tamzin Davies
#ifndef LOOKAT_H
#define LOOKAT_H


#include "important.h"
#include "xstring.h"

void look_at(int loc, room *rms, word *dir, noun *nns, string wd3)
{
    int i;
    
    if(wd3 == "ROOM")
    {
    cout <<  rms[loc].description  << endl;// prints room description
    }
    
    // checks what item is being looked at and prints the description
    
    
    
        if(wd3 == "DOOR")
        {
            if(nns[ROOM1_DOOR].location == loc)
            {
                cout <<  nns[ROOM1_DOOR].description  << endl;
            }
            else 
            {
                cout << no_item << endl;
            }
        }
                
        if(wd3 == "TABLE")
        {
            if(nns[ROOM1_TABLE].location == loc)
            {
                cout << nns[ROOM1_TABLE].description << endl;
            }
            else 
            {
                cout << no_item << endl;
            }
        }
        
        if(wd3 == "BOOK")
        {
            if(nns[LAB_BOOK].location == loc)
            {
            cout << nns[LAB_BOOK].description << endl;
            }
            else 
            {
                cout << no_item << endl;
            }
        }
        
        if(wd3 == "BOOKSHELVES")
        {
            if(nns[BOOKSHELVES].location == loc)
            {
            cout << nns[BOOKSHELVES].description << endl;
            }
            else 
            {
                cout << no_item << endl;
            }
        }
        
        if(wd3 == "EQUIPMENT")
        {
            if(nns[EQUIPMENT].location == loc)
            {
            cout << nns[EQUIPMENT].description << endl;
            }
            else 
            {
                cout << no_item << endl;
            }
        }
        
        if(wd3 == "INVISABILITY")
        {
            if(nns[INVIS_POTION].location == loc)
            {
            cout << nns[INVIS_POTION].description << endl;
            }
            else 
            {
                cout << no_item << endl;
            }
        }
        
        if(wd3 == "POTION")
        {
            if(nns[INVIS_POTION].location == loc)
            {
            cout << nns[INVIS_POTION].description << endl;
            }
            else 
            {
                cout << no_item << endl;
            }
        }
       
       
}
#endif

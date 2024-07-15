//this file is by tamzin davies
#include "xstring.h"
#include "important.h"
void pick_up()
{
    if(wd3 == "BOOK")
        {
            cout << pick_up << nns[LAB_BOOK].description << endl;// prints "you have picked up a heavy bound spell book"
        }
        if(NOUN_MATCH == INVIS_POTION)
        {
            cout << pick_up <<nns[INVIS_POTION].description <<endl; //prints "you have picked up A glass vial full of invisibility potion"
        }
}

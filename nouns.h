//this file is adapted from https://pastebin.com/UFzveurA by Tamzin Davies
#ifndef NOUNS_H
#define NOUNS_H


#include "important.h"
#include "xstring.h"

void set_nouns(noun *nns)
{
    //enum en_NOUNS {ROOM1_DOOR, ROOM1_TABLE, LAB_BOOK, BOOKSHELVES, EQUIPMENT, INVIS_POTION};
    nns[ROOM1_DOOR].word = "DOOR";
    nns[ROOM1_DOOR].code = ROOM1_DOOR;
    nns[ROOM1_DOOR].description = room1_door;
    nns[ROOM1_DOOR].can_carry = false;
    nns[ROOM1_DOOR].location = room1;
    
    nns[ROOM1_TABLE].word = "TABLE";
    nns[ROOM1_TABLE].code = ROOM1_TABLE;
    nns[ROOM1_TABLE].description = room1_table;
    nns[ROOM1_TABLE].can_carry = false;
    nns[ROOM1_TABLE].location = room1;
    
    nns[LAB_BOOK].word = "BOOK";
    nns[LAB_BOOK].code = LAB_BOOK;
    nns[LAB_BOOK].description = spell_book;
    nns[LAB_BOOK].can_carry = true;
    nns[LAB_BOOK].location = lab;
    
    nns[BOOKSHELVES].word = "BOOKSHELVES";
    nns[BOOKSHELVES].code = BOOKSHELVES;
    nns[BOOKSHELVES].description = lab_shelves;
    nns[BOOKSHELVES].can_carry = false;
    nns[BOOKSHELVES].location = lab;
    
    nns[EQUIPMENT].word = "EQUIPMENT";
    nns[EQUIPMENT].code = EQUIPMENT;
    nns[EQUIPMENT].description = lab_equip;
    nns[EQUIPMENT].can_carry = false;
    nns[EQUIPMENT].location = lab;
    
    nns[INVIS_POTION].word = "INVISABILITY POTION";
    nns[INVIS_POTION].code = INVIS_POTION;
    nns[INVIS_POTION].description = invis_potion;
    nns[INVIS_POTION].can_carry = true;
    nns[INVIS_POTION].location = lab;
}
#endif

//this file is adapted from https://pastebin.com/UFzveurA by tamzin davies
#ifndef VERBS_H
#define VERBS_H


#include "important.h"
void set_verbs(word *vbs)
{
    // enum en_VERBS {PICK_UP, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
    vbs[PICK_UP].code = PICK_UP;
    vbs[PICK_UP].word = "PICK UP";
    vbs[DROP].code = DROP;
    vbs[DROP].word = "DROP";
    vbs[USE].code = USE;
    vbs[USE].word = "USE";
    vbs[OPEN].code = OPEN;
    vbs[OPEN].word = "OPEN";
    vbs[CLOSE].code = CLOSE;
    vbs[CLOSE].word = "CLOSE";
    vbs[EXAMINE].code = EXAMINE;
    vbs[EXAMINE].word = "EXAMINE";
    vbs[INVENTORY].code = INVENTORY;
    vbs[INVENTORY].word = "INVENTORY";
    vbs[LOOK].code = LOOK;
    vbs[LOOK].word = "LOOK";
}

#endif

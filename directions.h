//this file is from https://pastebin.com/UFzveurA
#ifndef DIRECTIONS_H
#define DIRECTIONS_H
#include "important.h"

void set_directions(word *dir)
{
    dir[NORTH].code = NORTH;
    dir[NORTH].word = "NORTH";
    dir[EAST].code = EAST;
    dir[EAST].word = "EAST";
    dir[SOUTH].code = SOUTH;
    dir[SOUTH].word = "SOUTH";
    dir[WEST].code = WEST;    
    dir[WEST].word = "WEST";
}
#endif

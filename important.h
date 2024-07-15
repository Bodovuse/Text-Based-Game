//this file is adapted from https://pastebin.com/UFzveurA by Tamzin Davies
#ifndef IMPORTANT_H
#define IMPORTANT_H

#pragma once
#include <string>
#include <vector>

using namespace std;

enum en_DIRS {NORTH, EAST, SOUTH, WEST};
enum en_ROOMS {room1, hallway,lab, living_room};
enum en_VERBS {PICK_UP, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK};
enum en_NOUNS {ROOM1_DOOR, ROOM1_TABLE, LAB_BOOK, BOOKSHELVES, EQUIPMENT, INVIS_POTION};

const int NONE = -1;
const int DIRS = 4;
const int ROOMS = 4;
const int VERBS = 8;
const int NOUNS = 6;
 
struct word
{
    string word;
    int code;
};
 
struct room
{
    string description;
    int exits_to_room[DIRS];
};

struct noun
{
    string word;
    string description;
    int code;
    int location;
    bool can_carry;
};

#endif

//this file is by Tamzin Davies
#ifndef XSTRING_H
#define XSTRING_H

#pragma once
#include <string>
#include <iostream>
#include <string_view>

// this will hold all the strings that will print to terminal

//general command returns
const char* long_com = "Command too long.";
const char* no_com = "No command given";
const char* bad_com = "No valid command entered.";
const char* prompt = "What would you like to do?";
const char* no_exit = "No exit that way";
const char* yes_exit = "there is an exit ";
const char* see_ya = "Goodbye!";
const char* door_desc = "an open door";
const char* no_door = "there is no door there";
const char* no_item = "you cant see that here";

//action descriptions
const char* door_open = "you opened the door";
const char* door_already_open = "door is already open";
const char* cant_open = "cant open it";
const char* pick_up = "you have picked up ";
    

//first room descriptions
const char* room1_desc = "you are in a small room with a wooden table in the middle,\nto the north there is a door.";
const char* room1_table = "an old looking wooden table, nothing special";
const char* room1_door ="a rough wooden door with a metal handle, it looks unlocked";

//hallway descriptions
const char* hallway_desc = "A torch lit hallway extends before you,\nthere are doors to the west, south and east.";

//lab descriptions
const char* lab_desc = "you find a labratory before you. The walls are covered in bookshelves full of manuscriptsand notes,\n a table full of delecate looking glass instruments sit before you and a thickly bound old open book.\n only door is to the east where you came.";
const char* greek_to_me = "you can't understand anything written in the book...\n looks like magic though...";
const char* lab_equip = "The lab equipment is slowly dripping a blue liquid into a glass vial with the lable 'invisibility potion' written on it";
const char* lab_shelves = "The shelves look very full... you think youve done enough reading already at school though";
const char* invis_potion = "a glass vial full of invisibility potion";
const char* spell_book = "a heavy bound spell book";

//living room descriptions
const char* living_room_desc = "you find yourself in a plush living room, a sofa and two armchairs sit before a crackling fire,\n a large rug covers the floor and there is a small table with some biscuits.";

#endif

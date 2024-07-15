//this file is adpated from https://pastebin.com/UFzveurA by tamzin davies
#ifndef ROOMS_H
#define ROOMS_H

#include "important.h"
#include "xstring.h"

void set_rooms(room *rms)
{
    rms[room1].description.assign(room1_desc);
    rms[room1].exits_to_room[NORTH] = hallway;
    rms[room1].exits_to_room[EAST] = NONE;
    rms[room1].exits_to_room[SOUTH] = NONE;
    rms[room1].exits_to_room[WEST] = NONE;
 
    rms[hallway].description.assign(hallway_desc);
    rms[hallway].exits_to_room[NORTH] = NONE;
    rms[hallway].exits_to_room[EAST] = living_room;
    rms[hallway].exits_to_room[SOUTH] = room1;
    rms[hallway].exits_to_room[WEST] = lab;
    
    rms[lab].description.assign(lab_desc);
    rms[lab].exits_to_room[NORTH] = NONE;
    rms[lab].exits_to_room[EAST] = hallway;
    rms[lab].exits_to_room[SOUTH] = NONE;
    rms[lab].exits_to_room[WEST] = NONE;
    
    rms[living_room].description.assign(living_room_desc);
    rms[living_room].exits_to_room[NORTH] = NONE;
    rms[living_room].exits_to_room[EAST] = NONE;
    rms[living_room].exits_to_room[SOUTH] = NONE;
    rms[living_room].exits_to_room[WEST] = hallway;
 
 
    
}

#endif

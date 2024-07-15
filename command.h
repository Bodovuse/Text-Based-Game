//This file is adapted from https://pastebin.com/UFzveurA by Tamzin Davies
#ifndef COMMAND_H
#define COMMAND_H

#include "important.h"
#include "xstring.h"
#include <string>

void section_command(string Cmd, string &wd1, string &wd2, string &wd3, string &wd4)
{
    string sub_str;
    vector<string> words;
    char search = ' ';
    size_t i, j;
 
    // Split Command into vector
    for(i = 0; i < Cmd.size(); i++)
    {
        if(Cmd.at(i) != search)
        {
            sub_str.insert(sub_str.end(), Cmd.at(i));
        }
        if(i == Cmd.size() - 1)
        {
            words.push_back(sub_str);
            sub_str.clear();
        }
        if(Cmd.at(i) == search)
        {
            words.push_back(sub_str);
            sub_str.clear();
        }
    }
    // Clear out any blanks
    // I work backwards through the vectors here as a cheat not to invaldate the iterator
    for(i = words.size() - 1; i > 0; i--)
    {
        if(words.at(i) == "")
        {
            words.erase(words.begin() + i);
        }
    }
    // Make words upper case
    // Right here is where the functions from cctype are used
    for(i = 0; i < words.size(); i++)
    {
        for(j = 0; j < words.at(i).size(); j++)
        {
            if(islower(words.at(i).at(j)))
            {
                words.at(i).at(j) = toupper(words.at(i).at(j));
            }
        }
    }
    //ADDED LARGER WORD SIZE ( wd3 wd4 )
    if(words.size() == 0)
    {
        cout << no_com << endl;// prints "No command given" to terminal
    }
    if(words.size() == 1)
    {
        wd1 = words.at(0);
    }
    
    if(words.size() == 2)
    {
        wd1 = words.at(0);
        wd2 = words.at(1);
    }
    
    if(words.size() == 3)
    {
        wd1 = words.at(0);
        wd2 = words.at(1);
        wd3 = words.at(2);
    }
    
    if(words.size() == 4)
    {
        wd1 = words.at(0);
        wd2 = words.at(1);
        wd3 = words.at(2);
        wd4 = words.at(3);
    }
    
    if(words.size() > 5)
    {
        cout << long_com << endl;//prints "Command too long." to terminal
    }
}
 

 
#endif

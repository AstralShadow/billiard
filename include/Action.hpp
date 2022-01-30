#ifndef ACTION_HPP
#define ACTION_HPP

#include "globals.hpp"
#include <vector>
#include <string>
#include <SDL2/SDL_rect.h>
using std::string;
using std::vector;


typedef string Flag;
class Action;


struct Speech
{
    string character;
    string text; 
};

struct Choice
{
    string character;
    std::pair<string, vector<Action>> options;
};

struct Condition
{
    Flag trigger;
    vector<Action> actions;
};

struct Command
{
    Command(){}
    ~Command(){}

    enum {
        map,
        move,
        spawn
    } type;
    
    union CommandData
    {
        CommandData(){}
        ~CommandData(){}
        string name;
        SDL_Point pos;
    } data;
};

class Action
{
public: 
    Action(){}
    ~Action(){}

private:
    union ActionData{
        ActionData(){}
        ~ActionData(){}

        Speech speech;
        Choice choice;
        Flag flag;
        Condition condition;
        Command command;
    } _data;

    enum {
        action_speech,
        action_choice,
        action_flag,
        action_condition,
        action_command
    } _state;
};



#endif

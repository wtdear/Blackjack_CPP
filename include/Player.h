#pragma once

#include <string>

using namespace std;

class Player
{
private:
    string name;
    int score;
public:
    Player(string name, int score)
    {
        this->name = name;
        this->score = 0;
    }
};
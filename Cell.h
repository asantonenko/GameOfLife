#ifndef CELL_H
#define CELL_H

#include<iostream>

class LifeGame;

class Cell
{
public:
    Cell(LifeGame * life, int y, int x, bool state);
    void calculate();
    void change();
    bool isalive()const
    {
        return state;
    }
    void set_state(bool value)
    {
        newstate=state=value;
    }
private:
    LifeGame * life;
    int y,x;
    bool state;
    bool newstate;
};

std::ostream& operator<<(std::ostream& out, const Cell& c);

#endif // CELL_H

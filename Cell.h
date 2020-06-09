#ifndef CELL_H
#define CELL_H

#include<iostream>

/*Не могу использовать #include "LifeGame.h" - иначе порочный круг!
  вместо этого использую предварительное объявление класса */
class LifeGame;

class Cell
{
public:
    Cell(LifeGame * life, int y, int x, bool state);
    void calculate();
    void change();
    bool is_alive()const
    {
        return state;
    }
    void set_state(bool value)
    {
        newstate=state=value;
    }
protected:
    int get_neighbour_count()const;
private:
    LifeGame * life;
    int y,x;
    bool state;
    bool newstate;
};

std::ostream& operator<<(std::ostream& out, const Cell& c);

#endif // CELL_H

#include "Cell.h"

Cell::Cell(LifeGame * life, int y, int x, bool state)
    :life(life), y(y), x(x), state(state), newstate(state)
{
    //To-do: add checks
}

void Cell::calculate()
{
    //To-do: implement
}

void Cell::change()
{
    state = newstate;
}

std::ostream& operator<<(std::ostream& out, const Cell& c)
{
    return out <<(c.isalive()?'X':' ');
}


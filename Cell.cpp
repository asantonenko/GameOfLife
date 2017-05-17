#include "Cell.h"

Cell::Cell(LifeGame * life, int x, int y, bool state)
 :life(life), x(x), y(y), state(state), newstate(state)
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

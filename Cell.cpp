#include "Cell.h"
#include "LifeGame.h"

#include<algorithm>

using namespace std;

Cell::Cell(LifeGame * life, int y, int x, bool state)
    :life(life), y(y), x(x), state(state), newstate(state)
{
    //To-do: add checks
}

int Cell::get_neighbour_count()const
{
    int count=0;
    for (int i=max(0,y-1); i<=min(y+1,life->get_rows()-1); i++)
        for (int j=max(0,x-1); j<=min(x+1,life->get_cols()-1); j++)
            if (y!=i || x!=j)
                if (life->get_cell(i,j)->is_alive())
                    count++;
    return count;
}

void Cell::calculate()
{
    int neighbour_count = get_neighbour_count();
    newstate = (state && (neighbour_count==2 || neighbour_count==3) )
                || (!state && neighbour_count==3);
}

void Cell::change()
{
    state = newstate;
}

ostream& operator<<(ostream& out, const Cell& c)
{
    return out <<(c.is_alive()?'X':' ');
}


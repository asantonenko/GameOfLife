#include <iostream>

#include "LifeGame.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    LifeGame game(15,40);
    game.get_cell(10,9)->set_state(true);
    game.get_cell(10,10)->set_state(true);
    game.get_cell(10,11)->set_state(true);
    game.print();
    game.step();
    game.print();
    game.step();
    game.print();
    return 0;
}

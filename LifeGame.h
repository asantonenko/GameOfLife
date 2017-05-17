#ifndef LIFEGAME_H
#define LIFEGAME_H

#include"Cell.h"

class LifeGame
{
public:
    LifeGame(int rows=40, int cols=40);
    ~LifeGame();
    void print()const;
    void step();
    Cell* getCell(int y, int x);

    //LifeGame(const LifeGame& other);
    //LifeGame& operator=(const LifeGame& other);
protected:
private:
    Cell*** board;
    int rows, cols;
};

#endif // LIFEGAME_H

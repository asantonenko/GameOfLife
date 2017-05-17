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
    Cell* get_cell(int y, int x);

    int get_cols()const
    { return cols; }

    int get_rows()const
    { return rows; }

    //LifeGame(const LifeGame& other);
    //LifeGame& operator=(const LifeGame& other);
protected:
private:
    Cell*** board;
    int rows, cols;
};

#endif // LIFEGAME_H

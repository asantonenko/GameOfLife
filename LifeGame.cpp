#include <iostream>
#include <string>
#include "LifeGame.h"

using namespace std;

LifeGame::LifeGame(int rows, int cols) : rows(rows), cols(cols)
{
    board = new Cell**[rows];
    for (int i=0; i<rows; i++)
    {
        board[i] = new Cell*[cols];
        for (int j=0; j<cols; j++)
            board[i][j] = new Cell(this,i,j,false);
    }
}

LifeGame::~LifeGame()
{
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            delete board[i][j];
    for (int i=0; i<rows; i++)
        delete board[i];
    delete board;
}


Cell* LifeGame::getCell(int y, int x)
{
    return board[y][x];
}

void LifeGame::print()const
{
    cout <<" " <<string(cols,'-')<<endl;
    for (int i=0; i<rows; i++)
    {
        cout <<"|";
        for (int j=0; j<cols; j++)
            cout <<*(board[i][j]);
        cout <<"|" <<endl;
    }
    cout <<" " <<string(cols,'-')<<endl;
}

void LifeGame::step()
{
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            board[i][j]->calculate();
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            board[i][j]->change();
}

/*LifeGame::LifeGame(const LifeGame& other)
{
    //copy ctor
}

LifeGame& LifeGame::operator=(const LifeGame& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}*/




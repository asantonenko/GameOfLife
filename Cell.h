#ifndef CELL_H
#define CELL_H

class LifeGame;

class Cell
{
  public:
    Cell(LifeGame * life, int x, int y, bool state);
    void calculate();
    void change();
    bool isalive()const
    { return state; }
  private:
    LifeGame * life;
    int x,y;
    bool state;
    bool newstate;
};

#endif // CELL_H

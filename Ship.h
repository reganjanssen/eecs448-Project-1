#ifndef SHIP_H
#define SHIP_H

#include <iostream>
using namespace std;

class Ship
{
  public:
    Ship();
    ~Ship();
    int ship_size; //size of ship and array
    char* ship_arr;

    bool m_isShip; // does this coordinate contain a ship
    bool m_hasBeenHit; // has this spot been hit
    bool m_isHorizontal; // horizontal or vertical placement

    void placeShip();
    void hitShip();
    void makeVertical();
};

#endif

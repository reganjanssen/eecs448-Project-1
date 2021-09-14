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
    int* ship_arr; //pointer to the array of the selected ship size.

    bool m_hasBeenHit; // has this spot been hit
    bool Ship::isSunk()
    void placeShip();
    void hitShip();
    void makeVertical();
};

#endif

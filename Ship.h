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
    bool isSunk; //keeps track of if the ship is sunk

    void hitShip();//marks an empty spot of the array as hit
};

#endif

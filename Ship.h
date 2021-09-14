#ifndef SHIP_H
#define SHIP_H

#include <iostream>
using namespace std;

class Ship
{
  public:
    Ship();
    ~Ship();

    bool isSunk(); //returns true if the ship is fully sunk. used for other classes to check ship
    void hitShip();//marks an empty spot of the array as hit

  private:
    int ship_size; //size of ship and array
    int* ship_arr; //pointer to the array of the selected ship size.
    bool isFull; //keeps track of if the array is full

};

#endif

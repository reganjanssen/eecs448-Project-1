#include "Ship.h"

Ship::Ship(int size)
{
  ship_size = size;
  ship_arr = new int[size];
}

Ship::~Ship(){}

bool Ship::isSunk()
{

}

void Ship::hitShip()
{
  for(int i = 0; i <ship_size; i++)
  {
    if(ship_arr[i] != 1)
    {
      ship_arr[i] = 1;
    }
  }
}

#include "Ship.h"

Ship::Ship(int size)
{
  ship_size = size;
  ship_arr = new int[size];
}

Ship::~Ship()
{
  delete [] ship_arr;
}



void Ship::hitShip()
{
  for(int i = 0; i <ship_size; i++)
  {
    if(ship_arr[i] != 1)
    {
      ship_arr[i] = 1;
      if(i == ship_size)
      {
        isFull = true;
      }
    }
  }
}

bool Ship::isSunk()
{
  if(isFull == true)
  {
    return(true);
  }
}

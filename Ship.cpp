#include "Ship.h"

Ship::Ship(int size)
{
  ship_size = size;
  ship_arr = new char[size];
}

Ship::~Ship(){}

void Ship::placeShip()
{
  m_isShip = true;
}

void Ship::hitShip()
{
  m_hasBeenHit = true;
}

void Ship::makeVertical()
{
  m_isHorizontal = false;
}

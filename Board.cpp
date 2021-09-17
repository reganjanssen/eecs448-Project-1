#include "Board.h"

Board::Board()
{
  m_numShips = 0;
  //board myBoard = new array [] []; 
}

Board::~Board(){}

void Board::getNumShips(int numShips)
{
  m_numShips = numShips;
}

<<<<<<< Updated upstream
void Board::shipPlacement(int numShips)
{
  // set ships onto grid
  // could go in UserInteraction
=======
void Board::shipPlacement(int col,int row,int numShips, string direction)
{
  // set ships onto grid
  // could go in UserInteraction
  while(numShips!=0)
  { 
    if(numShips == 1)
    m_grid[col-1][row-1] = "^"; //ship's char = ^;
    if(numShips == 2)
    { 
      //check vertical or Horizontal
      m_grid[col-1][row-1] = "^"; //ship's char = ^;
      
      if(direction == "vertical" && col <=9)//vertical or horizontal
      m_grid[col][row-1] ="^";  //col or row also need to check col, or row between 1-9 or 1-10; 
      
      if(direction == "horizonta"l && row <=8)
      m_grid[col-1][row] = "^";
      numShips= 0; 
    }
    
  }
>>>>>>> Stashed changes
}

void Board::viewBoard()
{
  // view player's own board
  // view oppoenent's board
<<<<<<< Updated upstream

  cout << "  A B C D E F G H I J " << endl;

  for(int x = 0; x < 9; x++)
  {
      cout << x + 1 << " ";

    for(int y = 0; y < 10; y++)
    {
      cout << m_grid[x][y].gridChar << " ";
    }
    cout << endl;
  }

=======

  cout << "  A B C D E F G H I J " << endl;
  
  for(int x = 0; x < 9; x++)
  {
      cout << x + 1 << " ";

    for(int y = 0; y < 10; y++)
    {
      cout << m_grid[x][y].gridChar << " ";
    }
    cout << endl;
  }
  
>>>>>>> Stashed changes
}

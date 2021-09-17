#include "UserInteraction.h"

UserInteraction::UserInteraction()
{
  player1Board = new Board();
  player2Board = new Board();
  //player1Ship = new array [][];
  //player2Ship = new araay [][];
}

UserInteraction::~UserInteraction()
{
  delete player1Board;
  delete player2Board;
}

void UserInteraction::playGame()
{
  // main code goes here
<<<<<<< Updated upstream
=======
  int choice, col, row;
  string direction;
  p1Turn = true;
  cout << "Hi! Welcome to Battleship!\n";
  cout << "1. Start" << endl; // start the game
  cout << "2. Quit" << endl; //quit the game
  cout << "Option: ";
  cin >> choice;
  if(choice == 1)
  {
    cout << "***************************\n";
    cout << "Game is starting...\n";
    cout << "***************************\n";


    cout << "input your number of ships (enter a value between 1-6): ";
    cin >> numShips;

    while(numShips > 6 || numShips <=0)
    {
      cout << "Sorry, the value entered was not between the allowed value. Please try again.";
      cout << "input your number of ships (enter a value between 1-6): ";
      cin >> numShips;
    }

    cout << "Player 1 where you like to set your ship?(enter col(1-9) and row(1-10)) \n";
    cin >> col, row;
    cout << "Player 2 would you like to set your ship on vertical or horizontal?(enter vertical or horizontal ) \n";
    cin >> direction;
    player1->shipPlacement(col,row,numShips,direction);
    cout << "Player 2 where you like to set your ship?(enter col(1-9) and row(1-10)) \n";
    cin >> col, row;
    cout << "Player 2 would you like to set your ship on vertical or horizontal?(enter vertical or horizontal ) \n";
    cin >> direction;
    player2->shipPlacement(col,row,numShips,direction);
>>>>>>> Stashed changes

  while(1)
  {
    int choice;
    cout << "1. Start" << endl; // start the game and setting
    //cout << "2. Setting" << endl;
    cout << "2. Quit" << endl;
    cin >> choice;
    if(choice == 1)
    {
      cout << "Game is starting...\n";
      cout << "***************************"; 
      cout << "Player 1";
      cout << "***************************"; 
      player1Board->viewBoard();
      cout << "input your number of ships ";
      int cout;
      cin >> cout;
      for(int k=1; k<=cout; k++)
      {
          //set each ship  
          //if()
          cout << "Player 1 where you like to set your ship " + k  "input your col and row" ;
          //check is
      }
      //after set player 1 and then go to player 2 
      





    }
    if(choice == 2)
    {
      break;
    }
    if(choice<1 || choice>2)
    {
      cout << "Please enter the correct number to start a game or quit!"<< endl;
    }
  }
}

void UserInteraction::run()
{
  playGame();
}

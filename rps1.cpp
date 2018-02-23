//Objective:  Play rock, paper, scissors
//Name: Julie Deng
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;
#include <cstdlib> 
#include <ctime>

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //initialize random number generator
  srand(time(0));
  rand() % 3;

  //output my name and objective and program information
  cout << "Objective: This program will play rock, paper, scissors.\n"; 
  cout << "Programmer: Julie Deng\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Data
  char userPlay = 'W'; //user's move
  int computerPlay = 0; //computer's move
  int userScore = 0; //user's score
  int computerScore = 0; //computer's score

  //output introduction
  cout << "Welcome to the game of Rock, Paper, Scissors. You will be asked to choose either R=rock or P=paper or S=scissors, and the computer will do the same. The winner is determined by Rock wins against Scissors, or Scissors wins against Paper, or Paper wins against Rock. The best player is the player with the highest overall score." << endl;

  //Receive user input
  while (userPlay != 'Q' && userPlay != 'q')
  {  
    cout << "Choose: [R=rock, P=paper, S=scissors, or Q=quit]: ";
    cin >> userPlay;
    cin.ignore(1000, 10); 

    //randomly generate computer play
    computerPlay = rand() % 3;

    //determine the winner
    if(userPlay == 'R' && computerPlay == 0)
         {
         cout << "Computer move:R"<< endl;
         cout << "It's a tie!" << endl;
         }
    else if(userPlay == 'r' && computerPlay == 0)
         {
         cout << "Computer move:R"<< endl;
         cout << "It's a tie!" << endl;
         }
    else if(userPlay =='R' && computerPlay== 1)
         {
         cout << "Computer move:P"<< endl;
         cout << "Computer wins" << endl;
         computerScore++;
         }
    else if(userPlay =='r' && computerPlay== 1)
         {
         cout << "Computer move:P"<< endl;
         cout << "Computer wins" << endl;
         computerScore++;
         }
    else if(userPlay =='R' && computerPlay == 2)
         {
         cout << "Computer move:S"<< endl;
         cout << "Human wins" << endl;
         userScore++;
         }
    else if(userPlay =='r' && computerPlay == 2)
         {
         cout << "Computer move:S"<< endl;
         cout << "Human wins" << endl;
         userScore++;
         }
    else if(userPlay == 'P' && computerPlay == 0)
         {
         cout << "Computer move:R"<< endl;
         cout << "Human wins" << endl;
         userScore++;
         }
    else if(userPlay == 'p' && computerPlay == 0)
         {
         cout << "Computer move:R"<< endl;
         cout << "Human wins" << endl;
         userScore++;
         }
    else if(userPlay == 'P' && computerPlay == 1)
         {
         cout << "Computer move:P"<< endl;
         cout << "It's a tie!" << endl;
         }
    else if(userPlay == 'p' && computerPlay == 1)
         {
         cout << "Computer move:P"<< endl;
         cout << "It's a tie!" << endl;
         }
    else if(userPlay == 'P' && computerPlay == 2)
         {
         cout << "Computer move:S"<< endl;
         cout << "Computer wins" << endl;         
         computerScore++;
         }
    else if(userPlay == 'p' && computerPlay == 2)
         {
         cout << "Computer move:S"<< endl;
         cout << "Computer wins" << endl;         
         computerScore++;
         }
    else if(userPlay == 'S' && computerPlay == 0)
         {
         cout << "Computer move:R"<< endl;
         cout << "Computer wins" << endl;
         computerScore++;
         }
    else if(userPlay == 's' && computerPlay == 0)
         {
         cout << "Computer move:R"<< endl;
         cout << "Computer wins" << endl;
         computerScore++;
         }
    else if(userPlay == 'S' && computerPlay == 1)
         {
         cout << "Computer move:P"<< endl;
         cout << "Human wins" << endl;
         userScore++;
         }
    else if(userPlay == 's' && computerPlay == 1)
         {
         cout << "Computer move:P"<< endl;
         cout << "Human wins" << endl;
         userScore++;
         }
    else if (userPlay == 'S' && computerPlay == 2)
         {
         cout << "Computer move:S"<< endl;
         cout << "It's a tie!" << endl;
         }
    else if (userPlay == 's' && computerPlay == 2)
         {
         cout << "Computer move:S"<< endl;
         cout << "It's a tie!" << endl;
         }
    cout << "Computer wins:"<< computerScore;
    cout << "  Human wins:" << userScore<< endl;
    cout << endl;
  } //while

  cout << "Thanks for playing!" << endl;
  return 0;
}//main
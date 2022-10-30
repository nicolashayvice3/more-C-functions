#include <iostream>
#include <vector>
#include "hangman_functions.h"
using namespace std;

void greet()
{
  std::cout << "=====================\n";
  std::cout << "Hangman: The Game\n";
  std::cout << "=====================\n";
  std::cout << "Welcome to play hangman. This game is to check your spelling skill\n";
}

// draws the hangman
void display_misses(int misses)
{
  if(misses==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

}


void display_status(vector<char> incorrect, string answer)
{
  cout<<"Incorrect Guesses: \n";

  for(int i = 0; i<incorrect.size(); i++)
  {
    cout<<incorrect[i]<<" ";
  }

  cout<<"\nCodeword:\n";

  for(int i = 0; i<answer.length(); i++)
  {
    cout<<answer[i]<<" ";
  }
}

// draws the saved man or the upside down hanged man
void end_game(string answer, string codeword)
{
  if(answer==codeword)
  {
    cout<<"Hooray! You saved the person from being hanged and earned a medal of honor!\n";
    cout<<"  O    \n";
    cout<<" /|\\  \n";
    cout<<" / \\  \n";
    cout<<"       \n";
    cout<<"Congratulations!\n";
  }
  else
  {
    cout<<"On no! The man is hanged!\n";
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<" \\|/  | \n";
    cout<<" \\|/  | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
}
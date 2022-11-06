//question 5 - Nicolas hayvice-Caballe

#include <iostream>
#include <vector>
#include "hangmanFunctions.h"
using namespace std;

//runs all the functions within main

int main(){
  //starts the game with a greeting 
  greet();

  // variables for all aspects of game like choosen word(yoobee) and misses(max 3)
  string codeword = "yoobee";
  string answer = "______";
  int misses = 0;
  //vector with all incorrect guesses
  vector<char> incorrect;
  bool guess = false;
  char letter;

  //while loop to keep game running until all guesses are used or word is guessed
  while(answer!=codeword && misses < 3){
    display_misses(misses);
    display_status(incorrect, answer);

    cout<<"\n\nPlease enter your guess: ";
    cin>>letter;

    //for loop to check if letter is in the word
    for(int i = 0; i<codeword.length(); i++){
      if(letter==codeword[i])
      {
        answer[i] = letter;
        guess = true;
      }
    }
    if(guess){
      cout<<"\nCorrect!\n";
    }
    else{
      cout<<"\nIncorrect! Another portion of the person has been drawn.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  
  // ends the game
  end_game(answer, codeword);
  return 0;
}
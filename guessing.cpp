#include <iostream>
#include <stdio.h>    
#include <stdlib.h>   
#include <time.h> 

using namespace std;

//Guessing Game by Justin He- guess a number between 0-100
//the computer will tell you if it is too high or too low or correct
//if correct your number of guesses will be displayed and have the option
//to play again

int main() {
int input;
 int running = 1;
 int playing = 1;
 char yn = ' ';
 while(playing == 1){
     srand(time(NULL));
     int num = rand() %101; //generate random number 0-100
     int count = 0; //keeps track of guesses
   running =1;
   cout << "Input your guess (a number from 0 to 100): " << endl;
 while(running == 1){
   cin >>input;
   count++; //takes in input and adds to count
 if (input > num){
   cout << "Not equal, guess is too high"<<endl  ; }

 if (input < num){
    cout << "Not equal, guess is too low" << endl; }

 if (input == num){
   //if input matches number, total guesses are displayed and option to play again
  cout <<"Correct"<<endl;
  cout <<count << " guesses"<<endl << endl;
  running =0;
  cout <<"PLAY AGAIN? (Y/N)"<<endl;
  cin >>yn;

  if(yn=='y'||yn=='Y'){ //restarts game if player answers yes
    cout <<"RESTARTING"<<endl<<endl;
    playing = 1;
  }

  if(yn=='n'||yn=='N'){
    cout <<"EXITING"<<endl;
    playing = 0;
  }

 }


 }
}
 return 0;
}


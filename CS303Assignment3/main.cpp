//Hunter Tysdal
//CS303
//12/08/22


//Queue to place front element to back (finished)

#include <iostream>
#include "Functions.h"
#include <queue>
#include <map>
using namespace std;

int main() {

  queue<int> numbers; //queue that will be manipulated
  int i = 5; //used for text purposes to show user which sequence of queue they are entering
  int j = 1; //used for the iteration of the while loop
  int num;
  
  cout << "Queue is currently empty, add numbers: " << endl;
  while(i != 0){ //iterates for user to enter number for the queue
    cout << "Choose place " << j << ": ";
    cin >> num;
    numbers.push(num); //add entry to the queue
    i -= 1;
    j += 1;
  }

  cout << "Now we are going to move the first value to the end of the queue" << endl << endl;
  
  cout << "Current Queue: ";
  show(numbers); //displays the current queue
  cout << endl;
  cout << "Current first digit = " << numbers.front() << endl << endl; //displays front of queue

  queue<int>newq = move_to_rear(numbers); //creates copy of queue using function with front digit at the ned

  cout << endl << "Front number has now been moved to the back of the queue" << endl << endl;

  cout << "New queue = ";
  show(newq); //displays the updated queue
  cout << endl;
  cout << "New front number = " << newq.front();
  //displays front digit of updated queue
  cout << endl << endl;

  

  //Plaindrome
  
  string userWord; //word to be checked
  cout << "Palindrome Checker" << endl;
  cout << "Choose a word to check: ";
  cin >> userWord;
  
  int wordSize = userWord.size(); //gets size of userWord to use in function
  //cout << wordSize;

  if (recursPalindromes(userWord, wordSize, 0) == true){ //output for if word is palindrome
    cout << userWord << " is palindrome";
  }
  else{ //output if word is not palindrome
    cout << userWord << " is not plaindrome";
  }
  cout << endl << endl;


  //Using Maps

  map<string, string> capitals {{"Nebraska", "Lincoln"}, {"New York", "Albany"}, {"Ohio", "Columbus"}, {"California", "Sacramento"}, {"Massachusetts", "Boston"}, {"Texas", "Austin"}};
  //default map

  showMap(capitals); //displays map

  cout << endl;
  cout << "Now we are going to change the capital of California to Los Angeles" << endl << endl;

  map<string, string> newCap = changeCali(capitals); //calls function that changes the capital of california
  cout << "New map of capitals: " << endl << endl;
  showMap(newCap); //displays new map

  cout << endl << endl;
  string userState;
  cout << "Which capital would you like to look for?" << endl;
  cin >> userState; //gets state name from user
  
  string city = returnCap(newCap, userState); //sets variable to capital of selected state
  cout << "Capital of " << userState << " is " << city;
  
}
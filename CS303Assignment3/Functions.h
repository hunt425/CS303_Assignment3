#include <iostream>
#include <queue>
#include <map>
using namespace std;

void show(queue<int> a){ //function to display queues
  while(!a.empty()){
    cout << '\t' << a.front(); //displays current value
    a.pop(); //removes current value to put new value in the front
  }
}

queue<int> move_to_rear(queue<int> b){
  int save = b.front(); //saves first entry that will soon  be deleted
  b.pop(); //removes first value
  b.push(save); //places original front value to the end of the queue
  return b; //returns new queue with deisred changes
}


bool recursPalindromes(string word, int size, int start){
  int i = size; //used to check for end of iteration

  if (i == 0){ //if function has run through all iterations it is a palindrome
    return true;
  }
  
  if (word[start] != word[size - 1]){ // if the desired letters don't match it is not a palindrome
    return false;
  }

  return (recursPalindromes(word, size - 1, start + 1)); //implements recursion to check the next set of letters
}

void showMap(map<string,string> m){
  map<string, string>::iterator itr; //iterator to read the map
  cout << "Capital Map contains: " << endl;
  cout << "----------------------" << endl;
  
  for(itr = m.begin(); itr != m.end(); ++itr){
    cout << itr -> first << ", " << itr -> second << endl; //iterates through map and prints value and key of map
  }
}

map<string, string> changeCali(map<string, string> cali){
  cali["California"] = "Los Angeles"; //changes key of California to Los Angeles
  return cali; //returns new map
}

string returnCap(map<string, string> cap, string state){
  return cap[state]; //returns key associated to the state entered
}
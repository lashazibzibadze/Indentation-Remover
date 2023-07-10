/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 7 Task A

This program removes indentation.
*/

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){
  int index = 0;
  int counter= 0;
  string test;
  for(int i = 0; i < line.size(); i++){
    int k= line[i];
  
    if(!isspace(k)){
      counter= i;
      break;
    }

  }
  int m= line.size();
  string new_string;
  new_string= line.substr(counter, m);

  return new_string;
}

int main() {
  string s;
  while(getline(cin, s)){
    cout<< removeLeadingSpaces(s)<<endl;

  }
  return 0;
}
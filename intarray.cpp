#include <iostream>
using namespace std;
//takes in 10 numbers into an array and then prints them to console
int main() {
  int numberArray[10];
  for(int i = 1; i <= 10; ++i){
    cout << endl << "Enter integer #" << i << ": ";
    cin >> numberArray[i-1];
    if(numberArray[i - 1] < 0){
      i--;
      cout << endl << "Invalid input, must be a nonegative number.";
    }
  }
    for(int a:numberArray){
      cout << a << endl;
    }
  }

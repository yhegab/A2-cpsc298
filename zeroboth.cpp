#include <iostream>
using namespace std;

//takes in a call by reference and changes both values to 0
void zeroBoth(int &x, int &y)
{
  x = 0;
  y = 0;
}

//Num now should read 0 after it
int main(){
  int num = 65;
  int num2 = 33;
  zeroBoth(num, num2);
  cout << "Num now: " << num << endl;
  cout << "Num2 now: " << num2 << endl;
  return 0;
}

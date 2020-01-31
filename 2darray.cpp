#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
  vector<int> first(20, -1);
  int arr[4][5];
  string input;
  int index = 0;
  try{
  //enters numbers into a vector
  while(index < 20){
  cout << "Enter numbers: ";
  cin >> first.at(index);
  cout << first.at(index) << endl;
  index++;
  cin >> first.at(index);
  cout << first.at(index) << endl;
  index++;
  cin >> first.at(index);
  cout << first.at(index) << endl;
  index++;
  cin >> first.at(index);
  cout << first.at(index) << endl;
  index++;
  cin >> first.at(index);
  cout << first.at(index) << endl;
  index++;
  while(first.at(index) == -1){
    index--;
  }
  }
}catch(exception& e){
  cout << "Vector is full" << endl;
}
index = 0;
//vector copies values onto the array
for(int i = 0; i < 4; ++i){
  for(int j = 0; j < 5; ++j){
    arr[i][j] = first.at(index);
    index++;
  }
}
return 0;
}

#include <iostream>
#include <string>
using namespace std;

//takes in call by references and modifies the values to the user input
void input(int &feet, float &inches){
  cout << "Input feet: ";
  cin >> feet;
  cout << "Input inches: ";
  cin >> inches;
}

//takes in call by references and modifies the values based on the conversion from feet to meters
void calculate(int &meters, float &centi){
  int inches = centi + (meters * 12);
  inches *= 2.54;
  centi = inches%100;
  meters = (inches - centi)/100;
}

//prompts the user to test the converter out as many times as desired
int main(){
  string done = "go";
  int big;
  float little;
  while(done != "exit"){
    input(big, little);
    cout << big << " feet and " << little << " inches is: ";
    calculate(big, little);
    cout << big << " meters and " << little << " centimeters" << endl;
  cout << "Type exit to quit this program, otherwise type anything: ";
  cin >> done;
  }
  return 0;
}

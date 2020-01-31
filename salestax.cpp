#include <iostream>
using namespace std;

//calculates the sales tax for any item
float addTax(float taxRate, float cost){
  taxRate /= 100;
  taxRate *= cost;
  cost += taxRate;
  return cost;
}

int main(){

  return 0;
}

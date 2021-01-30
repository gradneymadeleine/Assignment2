#include <iostream>

using namespace std;

void addTax(float& taxRate, float& cost){
  float value = cost * (taxRate/100);
  value = value + cost;
  cout << "$" << value << endl;
}

int main() {
  float tax = 33.0;
  float origCost = 95.0;


  addTax(tax, origCost);


}

#include <iostream>

using namespace std;

int main(){
  int numberArray[10];
  int i;

  cout << "Input up to 10 nonnegative numbers" << endl;

  for(i = 0; i < 10; ++i){ // need the loop to get 10 inputs
    cin >> numberArray[i];
    if(numberArray[i] <0){ // checking to make sure there are no negative numbers
      cout << "You input a negative number " << endl;
    }
  }

  if(numberArray[i] > 0){
    for(i = 0; i < 10; ++i){ //iterate over the inputs and print out the numbers
      cout <<" Numebers are: " << numberArray[i] << " " << endl;
      }
    }

  return 0;
}

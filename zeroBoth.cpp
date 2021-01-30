#include <iostream>

using namespace std;

void zeroBoth(int& x, int& y){
  x = 0;
  y = 0;
}

int main(){
  int a;
  int b;
  zeroBoth(a,b);
  cout << a << " " << b << endl;
}

#include <iostream>

using namespace std;

void inPutConversion(int& feet, int& inches){
  cout<< "Input feet: ";
  cin >> feet;
  cout << "Input inches: ";
  cin >> inches;
}
void calcConversion(int feet, int inches, float& meters, float& centimeters){
  meters = (feet * 0.3048) + (inches * 0.0254);
  centimeters = (feet * 30.48)+(inches * 2.54) ;
}
void outPutConversion(float feet, float inches, float meters, float centimeters){
  cout << "There are " << meters << " meters, and " << centimeters << " centimeters in " << feet << " feet and " << inches << " inches." << endl;

}

int main(){
  int ft;
  int in;
  float m;
  float cm;
  char loop;

  cout << "Do you want to convert feet and inches to meters and centimeters? (y/n)" << endl;
  cin >> loop;

  while (loop == 'y' || loop == 'Y'){
    inPutConversion(ft, in);
    calcConversion(ft, in, m, cm);
    outPutConversion(ft, in, m, cm);
    cout << "Do you want to convert again? (y/n)" << endl;
    cin >> loop;
  }
  if(loop == 'n' || 'N'){
    cout << "Thank you!" << endl;
  }
  return 0;


}

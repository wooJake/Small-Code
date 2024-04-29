#include <iostream>

using namespace std;
int main(){
     
     //Whole number base 10 to other base.
     unsigned int decNumber;
     unsigned int base;
     
     cout << "Enter decimal value: ";
     cin >> decNumber;
     cout << endl;
     
     cout << "Enter base to convert to: ";
     cin >> base;
     cout << endl;
     
     int x = decNumber;

     //Read the output from bottom to top to get your answer.
     for(int i = 0; x >= 1; ++i){
          
          x /= base;
          cout << x << "::" << decNumber % base << endl;
          decNumber = x;
     }

     return 0;
}

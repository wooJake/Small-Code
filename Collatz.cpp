#include <iostream>
#include <cmath>

unsigned int Collatz(unsigned int n){
     
     unsigned int colEquat = (3 * n + 1) - ((cos(M_PI * n) + 1) * (5 * n + 2)) / 4;
     
     return colEquat;
}
int main(){
     
     int x = 0;
     for(int i = 0; i <= 40; ++i){
          
          x = Collatz(i);
          std::cout << x << " ";
     }
     
     return 0;
}

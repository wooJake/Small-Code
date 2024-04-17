#include <iostream>
#include <cmath>

#define SQRT_5 sqrt(5.0f)
#define PHI (1.0f + SQRT_5) / 2.0f
#define PHI_CONJ (1.0f - SQRT_5) / 2.0f
unsigned int Fibonacci(unsigned int n){
     
     unsigned int fibEquat = (pow(PHI,n) - pow(PHI_CONJ, n)) / SQRT_5;
     
     return fibEquat;
}
int main(){
     
     int x = 0;
     for(int i = 0; i <= 40; ++i){
          
          x = Fibonacci(i);
          std::cout << x << " ";
     }
     
     return 0;
}

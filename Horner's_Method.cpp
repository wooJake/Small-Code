#include <iostream>

int Horner(int a[3], int x){
    
    int q = 0;
    
    for(int i = 0; i < 3; ++i){
        
        q = q * x + a[i];
    }
    
    return q;
}
int main(){
    
    int a[3] = {1,3,1};
    std::cout << Horner(a, 12);

    return 0;
}

#include <iostream>

int smallestFactor(int& n){
    int factor;

    if(n > 2){
    for(int i = 2; i < n ; i++){
        if(n % i == 0){
            factor = i;
            return factor;
        }
    }
}
    return 0;
}

int main(){
    int n;
    std::cout << "Please input a number " << '\n';
    std::cin >> n;

    if(smallestFactor(n) == 0){
        std::cout << "n is prime" << '\n';
    }
    else{
        std::cout << "Smallest factor is: " << smallestFactor(n);
    }

    
}
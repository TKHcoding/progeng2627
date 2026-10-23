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
    int n1;
    int n2;
    std::cout << "Please input two numbers. The first one being smaller than the second. " << '\n';
    std::cin >> n1 >> n2;

    std::cout << "The prime numbers in the range are" << '\n';

    for(int i = n1; i<= n2; i++){
        if(smallestFactor(i) == 0){
            std::cout << i << '\n';
        }
    }

}
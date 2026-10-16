#include <iostream>

int main(){
    int n;
    int total = 1;

    std::cout << "please input a number" << std::endl;

    std::cin >> n;

    for(int i = 0; i < n; i++){
        total *= (n-i);
        
    }

    std::cout << total << std::endl;


}
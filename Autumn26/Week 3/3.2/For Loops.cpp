#include <iostream>

int main(){
    int x;
    int n;
    int total = 1;

    std::cout << "please input the power to multiply the numb" << std::endl;

    std::cin >> x >> n;

    for (int i = 0; i < n; i++){
        total *= x;
    }

    std::cout << total << std::endl;
}
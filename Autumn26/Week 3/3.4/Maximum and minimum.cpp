#include <iostream>

int main(){
    int maximum;
    int minimum;
    int n;

    std::cout << "please input a number" << std::endl;
    std::cin >> n;
    maximum = n;
    minimum = n;

    while( n!= 0){
    std::cout << "please input a number" << std::endl;
    std::cin >> n;

    if(maximum < n){
        maximum = n;
    }

    if(minimum > n){
        minimum = n;
    }

    std::cout << "The maximum so far is" << '\t' << maximum << '\n' 
    << "The minimum so far is" << '\t' << minimum << std::endl;

    }

    
}
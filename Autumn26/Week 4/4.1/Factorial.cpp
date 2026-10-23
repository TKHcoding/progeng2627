#include <iostream>

int myfactorial(int input){

    int fact = 1;

    if(input == 0){
    }
    else{
        for(int i = 1; i <= input; i++){
            fact *= i;
        }
    }
    return fact;

}

int main(){
    int input;
    std::cout << "Please input a non-negative integer" << '\n';

    std::cin >> input;
    std::cout << "The factorial of " << input << " is " << myfactorial(input) << std::endl;

}
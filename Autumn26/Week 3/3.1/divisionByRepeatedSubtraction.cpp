#include <iostream>

int main(){
    double dividedNumber;
    double divisor;
    double quotient;
    double remainder;

    std::cout << "Please input a number and its divisor\n" << std::endl;
    std::cin >> dividedNumber >> divisor;
    while(dividedNumber > divisor){
        dividedNumber -= divisor;
        quotient ++;
    }

    remainder = dividedNumber;

    std::cout << "Quotient is: " << quotient << '\n'
    << "Remainder is: " << remainder << '\n' << std::endl;


}
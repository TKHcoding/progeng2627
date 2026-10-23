#include <iostream>

void divide(int& a, int& b, int& quotient, int& remainder){
    quotient = a / b;
    remainder = a % b;
}

int main(){
    int a;
    int b;
    int quotient;
    int remainder;

    std::cout << "Please input a number and a divisor " << '\n';
    std::cin >> a >> b;

    divide(a , b , quotient , remainder);

    std::cout << "The quotient of the division " << 'a' << " divided by " << b << " is: " << quotient << " and the remainder is: " << remainder << std::endl;
}
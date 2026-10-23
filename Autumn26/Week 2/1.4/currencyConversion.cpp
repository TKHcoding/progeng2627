#include <iostream>

int main(){
    double amount;
    double conversionRate = 1.18;



    std::cout << "Hello, what is the amount of money in pounds that you have\n" << "Amount: "<< std::endl;
    std::cin >> amount;

    std::cout << "That is equivalent to: " << amount*conversionRate << "Euros" << '\n' << std::endl; 

}
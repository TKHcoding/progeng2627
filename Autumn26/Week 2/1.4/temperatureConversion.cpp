#include <iostream>

int main(){
    double temperature;

    std::cout << "Hello, what is the temperature in degree celsius\n" << "Temperature: "<< std::endl;
    std::cin >> temperature;

    std::cout << "Temperature in farenheit is: " << temperature*1.8 + 32 << '\n' << std::endl; 

}
#include <iostream>

int main(){
    double height, weight;

    std::cout << "Hello, what is your height in metres\n" << "Height: "<< std::endl;
    std::cin >> height;
    std::cout << "what is your weight in kilograms?\n" << "weight: " << std::endl;
    std::cin >> weight;

    std::cout << "Your BMI is: " << weight/(height*height) << '\n'<< std::endl; 

}
#include <iostream>

int main(){
    double userInput;
    double runningTotal;

    std::cout << "Please input a number \n" << std::endl;
    std::cin >> userInput;
    while(userInput != 0){
        runningTotal += userInput;
        std::cout << "The total is now " << runningTotal << std::endl;
        std::cout << "Please input another number \n" << std::endl;
        std::cin >> userInput;

    }


}
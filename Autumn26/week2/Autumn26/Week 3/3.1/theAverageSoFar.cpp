#include <iostream>

int main(){
    double userInput;
    double runningTotal = 0;
    int length = 0;

    std::cout << "Please input a number \n" << std::endl;
    std::cin >> userInput;
    while(userInput != 0){
        runningTotal += userInput;
        length ++;
        
        std::cout << "The average is now " << runningTotal / length << std::endl;
        std::cout << "Please input another number \n" << std::endl;
        std::cin >> userInput;

    }


}
#include <iostream>

int main(){
    double userNumber, outputNumber;

    std::cout << "Hello, what is your number?\n" << "Number: "<< std::endl;
    std::cin >> userNumber;
    
    if(userNumber<0){
        outputNumber = - userNumber;
    }
    else{
        outputNumber = userNumber;
    }


    std::cout << "abs(" << userNumber << ") = " << outputNumber << '\n'
    << std::endl; 

}
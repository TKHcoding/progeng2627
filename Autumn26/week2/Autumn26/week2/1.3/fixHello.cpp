#include <iostream>
//mistake 1,  "iostring" changed to "iostream"


int main(){
    std::cout << "hello" << std::endl;
    //second mistake, std::cout ">>" is wrong. changed to "<<". The former is only valid for user input
    //third mistake: inclusion of std::endl; to end off the command and line of code

}
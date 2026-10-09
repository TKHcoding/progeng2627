#include <iostream>
#include <string>

int main(){
    std::string userName;
    std::string userSurname;

    std::cout << "What is your name?\n" << std::endl;
    std::cin >> userName;

    std::cout << "Thank you, what is your surname" << std::endl;
    std::cin >> userSurname;

    std::cout << "Hello, " << userName << ' ' << userSurname << std::endl;
}
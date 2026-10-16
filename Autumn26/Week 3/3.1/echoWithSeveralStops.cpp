#include <iostream>
#include <string>

int main(){
    std::string s;
    bool stop = false;
    std::string userInput;
    std::cout << "Please input a word \n" << std::endl;
    
    std::cin >> s;

    while(stop == false){
        std::cin >> userInput;
        if(userInput == "stop" || userInput == "Stop" || userInput == "STOP"){
            stop = true;
        }
        std::cout << s << std::endl;
    }

}
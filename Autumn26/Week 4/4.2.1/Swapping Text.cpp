#include <iostream>
#include <string>

void swapword(std::string& a, std::string& b){
    std::string temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    std::string userinput1;
    std::string userinput2;
    
    std::cout << "Please input two words" << '\n';

    std::cin >> userinput1 >> userinput2;

    swapword(userinput1,userinput2);

    std::cout << "words have been swapped to " << userinput1 << '\n' << userinput2 << '\n';

}
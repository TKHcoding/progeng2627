#include <iostream>
#include <string>

int main(){
    double value;
    std::string unitsIn;
    std::string unitsOut;
    


    std::cout << "Hello what is the temperature?\n" << std::endl;
    std::cin >> value >> unitsIn;
    
    if(unitsIn == "c" || unitsIn == "C"){
        value = value*1.8 + 32.0;
        unitsOut = 'F';
        
    }
    else if(unitsIn == "f" || unitsIn == "F"){
        value = (value - 32.0)/1.8;
        unitsOut = 'C';
    }
    else {
        std::cout << "invalid units" << std::endl;
        return 0;
    }

    std::cout << "this is the temperature with units converted " << value << ' ' << unitsOut << std::endl;


}
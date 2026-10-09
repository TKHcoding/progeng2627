#include <iostream>
#include <string>

int main(){
    double value;
    std::string unitsIn;
    std::string unitsOut;
    double conversionRate = 1.609;
    


    std::cout << "Hello what is the distance?\n" << std::endl;
    std::cin >> value >> unitsIn;
    
    if(unitsIn == "miles" || unitsIn == "mile"){
        value *= 1.609;
    }
    else if(unitsIn == "km"){
        value /= 1.609;
    }
    else {
        std::cout << "invalid unitsIn" << std::endl;
        return 0;
    }

    if(unitsIn == "km"){
        unitsOut = "miles";
    }
    if(unitsIn == "miles" || "mile"){
        unitsOut = "km";
    }

    std::cout << "this is the distance with unitsIn converted " << value << ' ' << unitsOut << std::endl;


}
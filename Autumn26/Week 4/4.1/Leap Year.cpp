#include <iostream>

bool leapyear(int inputYear){
    bool ly = false;

    if(inputYear%4 == 0){
        if(inputYear%100 != 0){
            ly = true;
        }
        else if(inputYear%400 == 0){
        ly = true;
    }
    }
   
    return ly;

}

int main(){
    std::cout << (leapyear(1600) == true)
    << (leapyear(2000) == true) 
    << (leapyear(1700) == false) 
    << (leapyear(1800) == false) 
    << (leapyear(1900) == false) 
    << (leapyear(2100) == false) 
    << (leapyear(2200) == false) 
    << (leapyear(2300) == false) 
    << (leapyear(2500) == false) 
    << (leapyear(2600) == false) 
    << (leapyear(2700) == false) 
    << (leapyear(2900) == false) 
    << (leapyear(3000) == false) 
    << (leapyear(2400) == true) 
    << (leapyear(2800) == true) 
    << std::endl;
}
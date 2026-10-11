#include <iostream>
#include <string>

int main(){
    int year;
    bool multipleFour, multipleHundred;
    std::string leap = "is not a leap year";


    std::cout << "Hello, what is your year\n" << "Year: "<< std::endl;
    std::cin >> year;
    if(year % 4 == 0){

    leap = "is a leap year";

        if(year % 100 == 0){
            leap = "is not a leap year";

            if(year % 400 == 0){
                leap = "is a leap year";
            }
        }



    std::cout << "Year " << leap << '\n' << std::endl; 

}
}
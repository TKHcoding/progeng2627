#include <iostream>
#include <string>

int main(){
    int max = 100;
    int min = 0;
    int guess;
    bool correct = false;
    std::string feedback;

    std::cout << "please think of a number between 0 to 100" << std::endl;

    while(correct == false){
    guess = (min + max)/2 ;

    std::cout << "is your number " << guess << '\n' << 
    "if not, is your number greater or smaller? "  << std::endl;

    
    std::cin >> feedback;
    if(feedback == "yes"){
        correct = true;
    }

    else if(feedback == "greater"){
        min = guess;
    }
    else if(feedback == "smaller"){
        max = guess;
    }

}


    

}
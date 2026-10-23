#include <iostream>

void myswap(double& x, double& y){
    double temp;
    if(y < x){
        temp = x;
        x = y;
        y = temp;
    }
}


void sort3numbers(double& a, double& b, double& c){
    if(b < a){
        myswap(a, b);
    }
    if(c < a){
        myswap(a, c);
    }
    if(c < b){
        myswap(b , c);
    }
}

int main(){
    double number1;
    double number2;
    double number3;

    std::cout << "Please input 3 numbers" << '\n';

    std::cin >> number1 >> number2 >> number3;

    sort3numbers(number1, number2 , number3);

    std::cout << "The sorted numbers in ascending order is \n" << number1 << ' ' << number2 << ' ' << number3 << std::endl;

}






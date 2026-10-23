#include <iostream>

double max(double a, double b, double c){
    double largest = a;
    if(b > largest){
        largest = b;
    }
    if (c > largest){
        largest = c;
    }
    return largest;   

}

int main(){
    std::cout << "Please input 3 numbers" << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << "Largest number is " << max (a, b, c) << std::endl;
}
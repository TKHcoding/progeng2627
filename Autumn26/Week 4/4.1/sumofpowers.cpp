#include <iostream>

double mypow(double base, int exp){
    double result = 1;

    if(exp == 0){
    }
    else if(exp < 0){
        for(int i = 0; i < -exp; i++){
            result /= base;
        }
    }
    else if(exp > 0){
        for(int i = 0; i < exp; i++){
            result *= base;
        }
    }
    return result;
}

double sumpow(double x, int n){
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += mypow(x,i);
    }
    return sum;
}

int main(){
    double x;
    int n;
    double answer;
    std::cout << "please input a base and power " << '\n';
    std::cin >> x >> n;
    answer = sumpow(x, n);
     std::cout << "The sum of powers is " << answer << '\n';
}
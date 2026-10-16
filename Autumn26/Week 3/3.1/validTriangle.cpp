#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;
    double s;
    double area;
    std::cout << "please input length of 3 triangle sides\n" << std::endl;
    std::cin >> a >> b >> c;

    if((a + b) > c ||(c + b) > a || (a + c) > b){
        s= 0.5 * (a + b + c);

        if(a == b && b == c){
            std::cout << "Triangle is an equilateral triangle\n";
        }
        else if(a == b || a == c || b == c){
            std::cout << "Triangle is an isosceles triangle\n";
        }
        else{
            std::cout << "Triangle is a scalene triangle\n";
        }

        area = std::sqrt(s * (s-a) * (s-b) * (s-c));
        std::cout << "Area of triangle is " << area << std::endl;

    }
    else{
        std::cout << "Triangle is invalid" << std::endl;
    }
}
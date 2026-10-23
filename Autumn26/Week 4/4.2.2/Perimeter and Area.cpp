#include <iostream>

void perimeterAndArea(double& length, double& breadth, double& area, double& perimeter){
    area = length*breadth;
    perimeter = 2*length + 2*breadth;
}

int main(){
    double length;
    double breadth;
    double area;
    double perimeter;
    
    std::cout << "Please input a length and breadth of a rectangle" << '\n';
    std::cin >> length >> breadth;


    perimeterAndArea(length, breadth, area, perimeter);

    std::cout << "The area is: " << area << '\n' << "And the perimeter is: " << perimeter << std::endl;

}
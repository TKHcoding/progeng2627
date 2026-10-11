#include <iostream>

int main(){
    double length, breadth;

    std::cout << "Hello, what is the length of the rectangle\n" << "Length: "<< std::endl;
    std::cin >> length;
    std::cout << "what is the breadth?\n" << "Breadth: " << std::endl;
    std::cin >> breadth;

    std::cout << "Perimeter is: " << length*2 + breadth*2 << '\n'
    << "Area is: " << length*breadth << std::endl; 

}
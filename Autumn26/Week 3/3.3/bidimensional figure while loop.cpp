#include <iostream>
 int main(){
    int n;
    int i = 0;
    int a = 0;

    std::cout << "input a number" << std::endl;
    std::cin >> n;

    while(i < n){
        while(a < n){
            std::cout << '*';
            a++;
    }
    i++;
    a = 0;
    std::cout << '\n';
 }
}
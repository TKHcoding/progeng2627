#include <iostream>
 int main(){
    int n;

    std::cout << "input a number" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        for(int a = 1; a <= n; a++){
            std::cout << a*(i+1) << '\t';
    }
    std::cout << '\n';
 }
}
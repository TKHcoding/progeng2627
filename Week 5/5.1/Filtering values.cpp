#include <iostream>
#include <vector>

int main(){
    int n = 0;
    int input;
    int t;
    std::vector <int> v;

std::cout << "Please input the number of elements in the vector" << '\n';
std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "please input your next number" << '\n';
        std::cin >> input;
        v.push_back(input);

    }

    std::cout << "What is the upper of limits you wish to consider?" << '\n';
    std::cin >> t;

    for(int a = 0; a < t; a++){
        if(v[a] < t){
            std::cout << v[a] << '\n';
        }
    }

}
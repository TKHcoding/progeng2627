#include <iostream>
#include <vector>

int main(){
    int n = 0;
    int input;
    int s;
    int counter = 0;
    std::vector <int> v;
    std::vector <int> positions;

std::cout << "Please input the number of elements in the vector" << '\n';
std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "please input your next number" << '\n';
        std::cin >> input;
        v.push_back(input);

    }

    std::cout << "What is the number you wish to see occurances for?" << '\n';
    std::cin >> s;

    for(int a = 0; a < n; a++){
        if(v[a] == s){
            counter ++;
            positions.push_back(a);
        }
    }

    std::cout << "The number " << s << " appeared " << counter << " times at indices:" << '\n';
    for(int b = 0; b < counter; b++){
        std::cout << positions[b] << '\n';
    }


}
#include <iostream>
#include <vector>

int searchVector(const std::vector<double>& v, int n){
    
    for (int i = 0; i < v.size(); i++){
        if(v[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<double> v{5, 3, 4, 1, 2, 3};
    std::cout << searchVector(v, 3) << '\n';
}

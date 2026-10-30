#include <iostream>
#include <vector>

int minVectorElement(const std::vector<double>& v){
    int index = 0;
    for (int i = 0; i < v.size(); i++){
        if(v[index] > v[i]){
            index = i;
        }
    }
    return index;
}

int main(){
    std::vector<double> v{5, 4, 1, 2, 3};
    std::cout << minVectorElement(v) << '\n';
}

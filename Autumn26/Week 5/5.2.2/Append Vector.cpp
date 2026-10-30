#include <iostream>
#include <vector>

void appendVectors(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& vout){
    vout.clear();
    for(int i = 0; i < v1.size(); i++){
        vout.push_back(v1[i]);
    }
    for(int i = 0; i < v2.size(); i++){
        vout.push_back(v2[i]);
    }

}



int main(){
    std::vector<int> a{1, 2, 3};
    std::vector<int> b{4, 5, 6};
    std::vector<int> c;

    appendVectors(a, b, c);
    for(int i = 0; i < c.size() ; i++){
        std::cout << c[i] << '\n';
    }
}
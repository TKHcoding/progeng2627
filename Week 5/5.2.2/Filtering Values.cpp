#include <iostream>
#include <vector>

void filterV(const std::vector<double>& v1, double t, std::vector<double>& vout){
    for(int i = 0; i < v1.size(); i++){
        if(v1[i] < t){
            vout.push_back(v1[i]);
        }
    }
}


int main(){
    std::vector<double> a{1, 2, 3, 4, 7, 6};
    std::vector<double> c;
    double t = 4;

    filterV(a, t, c);

    for(int i = 0; i < c.size() ; i++){
        std::cout << c[i] << '\n';
    }
}
#include<iostream>
#include <vector>

void mergeVectors(const std::vector<int>& a, const std::vector<int>& b, std::vector<int>& output){
    int i = 0;
    int j = 0;
    
    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]){
            output.push_back(a[i]);
            i++;
        }
        else if(b[j] <= a[i]){
            output.push_back(b[j]);
            j++;
        }

    }
    while(i < a.size()){output.push_back(a[i]); 
        i++;}
    while(j < b.size()){output.push_back(b[j]); 
        j++;}
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    mergeVectors(v1, v2, out);

    for(int i = 0; i < out.size(); i++){
        std::cout << out[i] << '\n';
    }
    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}
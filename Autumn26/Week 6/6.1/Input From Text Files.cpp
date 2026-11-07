#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

    if(!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;

    }
    double temp;
    std::vector<double> sum;
    double total = 0;

    while(infile >> temp){
        sum.push_back(temp);

    }
    for(int i = 0; i < sum.size(); i++){
        total += sum[i];
    }

    infile.close();

    std::cout << total << std::endl;
}

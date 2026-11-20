#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

//converts each line into a vector
std::vector <double> stringToVector(const std::string& s){
    //std::stringstream ensures a whole line is read and made into a vector despite spaces
    std::stringstream ss;
    std::string tmp;
    std::vector <double> out;
    ss << s;

    while(ss>>tmp){
        out.push_back(std::stod(tmp));
    }

    return out;

}

std::vector<std::vector<double>> readMatrixFromFile(const std::string& fileName){
    std::ifstream file;
    file.open(fileName);
    if(!file.is_open()){
        std::cout << "file failed to open" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;
//getline lets "line" store a full sentence in file
    while(std::getline(file,line)){
        out.push_back(stringToVector(line));
    }
    file.close();
    return out;
}

//Ensuring matrix multiplication is valid
bool validMultiply(
    const std::vector<double>& a,
    const std::vector<double>& b
){
    //finding length of longest row in a (needs to match to number of rows in b)

    if(a.size() == b.size()){
        return true;
    }
    else{
        return false;
    }


}

//Extracting a column from a vector
std::vector <double> columnChooser(const std::vector<std::vector<double>>& b, int n){
    std::vector<double> out;
    for(int i = 0; i < b.size(); i++){
        out.push_back(b[i][n]);
    }
    return out;
}

//The scalar product
double scalarProduct(
    const std::vector<double>& a,
    const std::vector<double>& b
){
    if(!validMultiply(a,b)){
        std::cout << "Multiplication not valid" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    double sum = 0;
    
    for(int i = 0; i < b.size(); i++){
        sum += a[i] * b[i];
    }
    return sum;

}

//Full matrix multiplication
std::vector<std::vector<double>> matrixMultiplication (
    const std::vector<std::vector<double>>& a,
    const std::vector<std::vector<double>>& b
){
    std::vector<std::vector<double>> out;
    std::vector<double> temp;

    for(int i = 0; i < a.size(); i++){
        temp.clear();
        for(int j = 0; j < b[0].size(); j++){
        temp.push_back(scalarProduct(a[i],columnChooser(b,j)));
        }
        out.push_back(temp);
    }
    return out;
}

int main(int argc, char* argv[]){
    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = readMatrixFromFile(argv[1]);
    std::vector<std::vector<double>> m2 = readMatrixFromFile(argv[2]);

    std::vector<std::vector<double>> m3 = matrixMultiplication(m1, m2);

    std::cout << "Product of Multiplication is: " << '\n';

    for(int i; i < m3.size(); i++){
        for(int j = 0; j < m3[i].size(); j++){
            std::cout << m3[i][j];
        }
        std::cout << '\n';
    }
}
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

void unionVector(const std::vector<std::string>& a, const std::vector<std::string>& b, std::vector<std::string>& combined){
    combined.clear();
    for(int i = 0; i < a.size(); i++){
        combined.push_back(a[i]);
    }
    for(int i = 0; i < a.size(); i++){
        combined.push_back(a[i]);
    }

}

bool searchVector(const std::vector<std::string>& a, const std::string& criteria){

for(int i = 0; i < a.size(); i++){
    if(a[i] == criteria){
        return true;
    }
}
return false;

}

void IntersectionVector(const std::vector<std::string>& a, const std::vector<std::string>& b, std::vector<std::string>& combined){
        
    for(int i = 0; i < a.size(); i++){
        if(searchVector(b, a[i])){
            combined.push_back(a[i]);
        }
    }    
}

int main(){
    std::ifstream inputFile;
    std::ofstream unionList;
    std::ofstream intersectionList;
    std::vector<std::string> warehouse1;
    std::vector<std::string> warehouse2;
    std::vector<std::string> merged;
    std::vector<std::string> intersection;

    inputFile.open("warehouse1.txt");
    if(!inputFile.is_open()){
        std::cout << "Error opening file" << '\n';
        return EXIT_FAILURE;
    }

    std::string temp;

    while(inputFile >> temp){
        warehouse1.push_back(temp);
    }
    inputFile.close();

    inputFile.open("warehouse2.txt");
    if(!inputFile.is_open()){
        std::cout << "Error opening file" << '\n';
        return EXIT_FAILURE;
    }

    while(inputFile >> temp){
        warehouse2.push_back(temp);
    }
    inputFile.close();

    unionVector(warehouse1, warehouse2, merged);
    IntersectionVector(warehouse1, warehouse2, intersection);

    unionList.open("UnionList.txt");
    if(!unionList.is_open()){
        std::cout << "Error opening file" << '\n';
        return EXIT_FAILURE;
    }
    for(int i = 0; i < merged.size(); i++){
        unionList << merged[i] << '\n';
    }
    unionList.close();

        intersectionList.open("IntersectionList.txt");
    if(!intersectionList.is_open()){
        std::cout << "Error opening file" << '\n';
        return EXIT_FAILURE;
    }
    for(int i = 0; i < intersection.size(); i++){
        intersectionList << intersection[i] << '\n';
    }
    intersectionList.close();
    




}
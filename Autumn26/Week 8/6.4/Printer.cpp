#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* arcv[]){
    std::ifstream bryan;
    bryan.open(arcv[1]);

    std::string tmp;
    if(!bryan.is_open()){
        std::cout << " error opening file" << std::endl;
        return 1;
    }
    while(std::getline(bryan, tmp)){
        bryan >> tmp;
    
    std::cout << tmp << std::endl;
    }
    bryan.close();
}
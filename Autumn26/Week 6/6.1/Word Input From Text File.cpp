#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

int main(){
    std::ifstream textFile;
    textFile.open("wordfile.txt");

    if(!textFile.is_open()){
        std::cout << "File failed to open" << '\n';
        return EXIT_FAILURE;
    }

    std::string temp;
    std::vector<std::string> passage;
    while(textFile >> temp){
        passage.push_back(temp);
    }
    for(int i = 0; i < passage.size(); i++){
        std::cout << passage[passage.size() - 1 - i] << '\n';
    }

    textFile.close();
}
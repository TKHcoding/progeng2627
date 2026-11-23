#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>

int twoToOne(int row, int rowlen, int col){
    return (row*rowlen + col);
}

int mfind(int n, const std::vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == n){
            return i;
        }
    }
    return -1;
}

bool checkSequence(const std::vector<int>& v){
    for(int n = 1; n <= v.size(); n++){
        if(mfind(n, v) == -1){
            return false;
    }
}
return true;
}

void getRow(int rowIndex, const std::vector<int>& in, std::vector<int>& out){
    out.clear();
    int rowlen = sqrt(in.size());

    for(int i = rowIndex*rowlen; i < (rowIndex + 1) * rowlen; i++){
        out.push_back(in[i]);
    }

}

void getCol(int colIndex, const std::vector<int>& in, std::vector<int>& out){
    out.clear();

    //sqrt(in.size()) gives row length. index of each successive column element is prev + row length
    for(int i = colIndex; i < in.size(); i += sqrt(in.size())){
        out.push_back(in[i]);
    }

}

void getSubsquare (int subs, const std::vector<int>& in, std::vector<int>& out){
    int length = sqrt(in.size());    
    int sublength = sqrt(sqrt(in.size()));
    int n = length / sublength;
    int subRow = subs / n;
    int subCol = subs % n;
    int corner = length * subRow * sublength + sublength * subCol; 

    //getting element of each subsquare
    for(int j = 0; j < sublength; j++){
    
        for(int i = 0; i < sublength; i++){
        out.push_back(in[corner + length*j + i]);
        }
    }

}

bool validSudoku(const std::vector<int>& in){
    std::vector<int> checkRow;
    std::vector<int> checkCol;
    std::vector<int> checkSubSq;

    for(int i = 0; i < sqrt(in.size()); i++){
        checkRow.clear();
        checkCol.clear();
        checkSubSq.clear();
        getRow(i, in, checkRow);
        getCol(i, in, checkCol);
        getSubsquare(i, in, checkSubSq);

        if(!checkSequence(checkCol)){
            return false;
        }
        if(!checkSequence(checkRow)){
            return false;
        }
        if(!checkSequence(checkSubSq)){
            return false;
        }
    }

    return true;
}




int main(int argc, char* argv[]){
    std::ifstream puzzle;
    if(argc != 2){
        std::cout << "One argument needed" << '\n';
        return EXIT_FAILURE;
    }
//opening of file
    puzzle.open(argv[1]);
    if(!puzzle.is_open()){
        std::cout << "File failed to open" << '\n';
        return EXIT_FAILURE;
    }

    std::vector<int> v;
    int temp;

    while (puzzle >> temp)
    {
        v.push_back(temp);
    }

    if(validSudoku(v)){
        std::cout << "Sudoku is valid" << '\n';
    }
    
    else{
        std::cout << "Sudoku is not valid" << '\n';
    }



}
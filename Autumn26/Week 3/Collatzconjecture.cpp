#include <iostream>

int main(){
    int n;
    int working;
    int step = 0;
    int maximum;

     std::cout << "please input a number" << std::endl;
     std::cin >> n;

     working = n;
     maximum = n;

     std::cout << n << std::endl;


     while(working != 1){

     if(working%2 == 0){
        working /= 2;
        step ++;

     }
     else if(working%2 == 1){
        working *= 3;
        working ++;
        step ++;
        if(working > maximum){
            maximum = working;
        }
     }
     std::cout << working << std::endl;
    }

    std::cout << "total steps needed is " << step << " maximum number is " << maximum;

     
}
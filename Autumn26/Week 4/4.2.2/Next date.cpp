#include <iostream>

bool leapyear(int& year){
    bool isLeapYear = false;
    if(year % 4 == 0){
        if(year % 400 == 0){
            isLeapYear = true;
        }
        else if(year % 100 != 0){
            isLeapYear = true;
        }
    }
    return isLeapYear;
}

void nextDate(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    //Accounting for end of the months
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;
    
    
    if(d1 == 30){
        if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10){
        d2 = d1 + 1;
    }
        else if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        d2 = 1;
        m2 = m1 + 1;
    }
}
    //Accounting for february
    else if(m1 == 2 && d1 == 28){
        if(leapyear(y1)){
            d2 = d1 + 1;
            
        }
        else{
            d2 = 1;
            m2 = 3;
        }

    }
    else if(m1 == 2 && d1 == 29){
        d2 = 1;
        m2 = 3;
    }

    if(d1 == 31){
        if(m1 == 12){
            d2 = 1;
            m2 = 1;
            y2 = y1 + 1;
        }
        else{
            d2 = 1;
            m2 = m1 + 1;
        }
    }
   
}

int main(){
    int d1;
    int m1;
    int y1;

    int d2;
    int m2;
    int y2;

    
    std::cout << "Please input a date in format day month year" << '\n';
    std::cin >> d1 >> m1 >> y1;

    nextDate(d1 , m1 , y1 , d2 , m2 , y2);

    std::cout << "Tomorrow's date will be " << d2 << ' ' << m2 << ' ' << y2 << std::endl;

}
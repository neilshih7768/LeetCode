#include "stdio.h"
#include "stdlib.h"

int romanToInt(char* s);

int main(){
    printf("%d\n", romanToInt("DCXXI"));
    system("PAUSE");
    return 0;
}


int Check(char c){
    switch(c){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToInt(char* s) {
    int iResult = 0;
    int i = 0;
    for(i = 0; Check(s[i+1]) != 0; i++){
        if(Check(s[i]) >= Check(s[i+1]))
            iResult += Check(s[i]);
        else
            iResult -= Check(s[i]);
    }
    iResult += Check(s[i]);
    return iResult;
}


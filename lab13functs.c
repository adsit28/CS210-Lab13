/** lab13functs.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */
#include <stdio.h>
#include "lab13functs.h"
#include <math.h>

void printRange(int start, int end){
    if (start < end){
        while (start <= end ){ 
            printf("%d\n", start);
            start++;
        }
    }
    else{
        while( start >= end){
            printf("%d\n", start);
            start--; 
        }
    }
}

int isArmstrong(int numIn){
    int numDigits = 0;
    int checkDig = numIn;
    int multy = numIn;

    while(checkDig > 0){
        checkDig = checkDig/10;
        numDigits++;
    }

    int newNum = 0;
    
    int placeHolder = 0;
    while(multy > 0){
        placeHolder = (multy%10);
        newNum = newNum + pow(placeHolder, numDigits);
        multy = multy/10;
        
    }
    

    if (newNum == numIn){
        return 1;
    }
    else{
        return 0;
    }

}

int findGCD(int num1, int num2){

    while(num1 != num2){
        if(num1 > num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
        
    }
    return num1;
}
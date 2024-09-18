/** lab13-02.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"

int main() {
    int iny = 0;
    scanf("%d", &iny);

    int strong = isArmstrong(iny);
    if(strong == 1){
        printf("%d is an Armstrong number.\n", iny);
    }
    else{
        printf("%d is not an Armstrong number.\n", iny);
    }
    return 0;

}
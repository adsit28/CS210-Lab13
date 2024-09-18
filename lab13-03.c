/** lab13-03.c
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
    int first = 0;
    int sec = 0;

    scanf("%d %d", &first, &sec);

    printf("GCD = %d", findGCD(first, sec));
    return 0;

}
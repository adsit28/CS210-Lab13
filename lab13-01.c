/** lab13-01.c
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
    int last = 0;

    scanf("%d%d", &first, &last);

    printRange(first, last);
    return 0;

}
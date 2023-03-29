#include <stdio.h>
#include "4sem.h"


int main(){
    char hex[77];
    int result1;
    printf("Enter number in hexadecimal system: ");
    scanf("%s", hex);
    result1 = conversion1(hex);
    printf("Number in decimal system: %d\n", result1);

    printf("Number of odd bits: %d\n", conversion2(result1));
    return 0;
}


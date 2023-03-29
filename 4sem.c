#include <stdio.h>
#include <string.h>
#include <math.h>



int conversion1(char hex[]){
    int res = 0, len, value;
    len = strlen(hex) - 1;
    for (int j = 0; hex[j] != '\0'; j++) {
        if (hex[j]>='0' && hex[j]<='9') {
            value = hex[j] - 48;
        }
        else if (hex[j]>='A' && hex[j]<='F') {
            value = hex[j] - 55;
        }
        else if (hex[j]>='a' && hex[j]<='f'){
            value = hex[j] - 87;
        }
        res += value * pow(16, len);
        len--;
    } 
    return res;
}

int conversion2(int dec){
    char bin[77] = {0};
    int i = 0, count = 0;
    for (i; dec > 0; i++) {
        if (dec % 2 == 0) {
            bin[i] = 0;
            dec = dec / 2;
        }
        else {
            bin[i] = 1;
            dec = dec / 2;
        }
    }
    i -= 1;
    for (; i>=0; i-=2) {
        if (bin[i] == 1) {
            count += 1;
        };
    }
    return count;
}



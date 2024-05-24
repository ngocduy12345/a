#include <stdio.h>
#include "gcd.c"
#include "gcd.h"
int main(){
    unsigned int num1, num2;

    printf("Nhap 2 so nguyen duong:");
    scanf("%u %u", &num1, &num2);
    unsigned int greatest_common_divisor = gcd(num1, num2);
    printf("UCLN cua %u va %u laa %u\n", num1,  num2, greatest_common_divisor);
    return 0;
}
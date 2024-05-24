#include <stdio.h>
int main(){
    float x, result;
    printf("Nhap x:");
    scanf("%f", &x);
    result = 1*x*x + 2*x + 1;
    printf("%f\n", result);
    return 0;
}
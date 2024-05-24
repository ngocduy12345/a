#include <stdio.h>
int main(){
    int x;
    int factorial = 1;
    printf("Nhap x:");
    scanf("%d", &x);
    if (x<0){
        printf("Error.\n");
        return 0;
    }
    for (int i = 1; i <= x; ++i) {
        factorial *= i;
    }
    
    printf("Giai thua cua %d la: %d", x, factorial);
    
    return 1;
}
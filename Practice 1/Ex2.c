#include <stdio.h>
int fibonacci(int n){
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
    int n;
    printf("Nhap so phan tu can in:\n");
    scanf("%d",&n);

    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }

  printf("\n");

  return 0;
}
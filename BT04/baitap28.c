#include<stdio.h>

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 1, i;
    for( i = 1; i <= n; i++){
        if(i % 2 == 0)
          Sum *= i;
    }
    printf("Sum = %d", Sum);
    return 0;
}
#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 1;
    for( i = 1; i <= n; i++)
        Sum *= i;
    printf("Sum = %d", Sum);
    return 0;
}
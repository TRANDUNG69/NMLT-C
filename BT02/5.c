#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int gt = 1;
    int Sum = 0;
    for(i = 1; i < n; i++){
        gt *= i;
        Sum += gt;
    }
    printf("Sum = %d", Sum);
    return 0;
}
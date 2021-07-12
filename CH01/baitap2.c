#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sum = 0;
    int gt = 1;
    for(i = 1; i <= n; i++){
        gt *= i * i;
        sum += gt;
    }
    printf("Tong la: %d", sum);
    return 0;
}
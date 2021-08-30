#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float Sum = 0, i;
    for(i = 1; i <= n; i += 2)
        Sum += 1.0 / i;
    printf("Sum = %.2f", Sum);
    return 0;
}
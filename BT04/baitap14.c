#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float Sum = 0, i;
    for(i = 1; i <= n; i++)
        Sum += (float) i/(i + 1);
    printf("Sum = %.2f", Sum);
    return 0;
}
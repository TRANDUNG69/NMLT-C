#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int mau;
    float Sum = 0, i;
    for(i = 1; i <= n; i++){
        mau = i * (i + 1);
        Sum += 1.0 / mau;
    }
    printf("Sum = %.2f", Sum);
    return 0;
}
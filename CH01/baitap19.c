#include<stdio.h>
int main(){
    int i, n, mau = 1, x;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    float sum = 1 + x;
    int tu = x;
    for(i = 3; i <= n; i+=2){
        tu *= x * x;
        mau *= i*(i-1);
        sum += (float) tu / mau;
    }
    printf("Tong la: %.2f", sum);
    return 0;
}
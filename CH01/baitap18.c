#include<stdio.h>
int main(){
    int i, n, mau = 1, tu = 1, x;
    float sum = 1;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i+=2){
        tu *= x * x;
        mau *= i *(i-1);
        sum += (float) tu / mau;
    }
    printf("Tong la: %.2f", sum);
    return 0;
}
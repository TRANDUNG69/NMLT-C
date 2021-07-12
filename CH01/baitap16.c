#include<stdio.h>
int main(){
    int i, n, tu = 1, mau = 0, x;
    float sum = 0;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        tu *= x;
        mau += i;
        sum += (float) tu / mau;
    }
    printf("Tong la: %.2f", sum);
    return 0;
}
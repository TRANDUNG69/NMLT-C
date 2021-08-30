#include<stdio.h>
int main(){
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float Sum = 0;
    int tu = 1;
    int mau = 0, i;
    for( i = 1; i <= n; i++){
        tu *= x;
        mau += i;
        Sum += (float) tu / mau;
    }
    printf("Sum = %.2f", Sum);
    return 0;
}
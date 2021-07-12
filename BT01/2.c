#include<stdio.h>
int main(){
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    int T = a + b;
    int H = a - b;
    int Tich = a * b;
    float Thuong =(float) a / b;
    printf("Tong a va b la: %d", T);
    printf("\nHieu a va b la: %d", H);
    printf("\nTich a va b la: %d", Tich);
    printf("\nThuong a va b la: %.2f", Thuong);
    return 0;
}
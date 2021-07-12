#include<stdio.h>
int main(){
    float x, y, z;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap y: ");
    scanf("%f", &y);
    printf("Nhap z: ");
    scanf("%f", &z);
    // ! Tìm max
    (x>y && x>z)?printf("Gia tri lon nhat la: %f", x):(y>z)?printf("\nGia tri lon nhat la: %f", y):printf("\nGia tri lon nhat la: %f", z);
    // ? Tìm min
    (x<y && x<z)?printf("\nGia tri nho nhat la: %f", x):(y>z)?printf("\nGia tri nho nhat la: %f", z):printf("\nGia tri nho nhat la: %f", y);
    return 0;
}
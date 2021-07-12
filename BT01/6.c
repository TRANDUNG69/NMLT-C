#include<stdio.h>

int main(){
    float PI = 3.14;
    int R;
    printf("Nhap R: ");
    scanf("%d", &R);
    float CV = 2 * R * PI;
    float DT = (float)PI * R * R;
    printf("Chu vi la: %f", CV);
    printf("\nDien tich la: %f", DT);
    return 0;
}
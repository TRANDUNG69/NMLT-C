#include<stdio.h>
int main(){
    int D , R;
    printf("Nhap D: ");
    scanf("%d", &D);
    printf("Nhap R: ");
    scanf("%d", &R);
    int DT = D * R;
    int CV = (D + R) * 2;
    printf("Dien tich la: %d", DT);
    printf("\nChu vi la: %d", CV); 
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    printf("Nhap n: ");
    do
    {
        scanf("%d", &n);
        if(n < 1900 || n > 2200) printf("Nhap lai n: ");
    }while(n < 1900 || n > 2200);
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
        printf("Nam vua nhap la nam nhuan");
    }
    else
        printf("Nam vua nhap khong phai la nam nhuan");
    return 0;
}
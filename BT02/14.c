#include<stdio.h>
int main(){
    int n; 
    printf("Nhap n > 0: ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Nhap lai n > 0");
    }
    else{
        int sm = 0;
        int m = n;
        while (m > 0)
        {
            int thuong = m % 10;
            sm = sm * 10 + thuong;
            m /= 10;
        }
        if(sm == n){
            printf("Day la so thuan nghich");
        }
        else{
            printf("Day la khong phai la so thuan nghich");
        }
    }
    return 0;
}
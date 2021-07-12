#include<stdio.h>
#include<math.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(sqrt(n)* sqrt(n) == n){
        printf("Day la so chinh phuong");
    }
    else{
        printf("Khong phai la so chinh phuong");
    }
}
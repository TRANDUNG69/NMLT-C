#include<stdio.h>

int main(){
    int n, b = 0, a;
    printf("Nhap n: ");
    scanf("%d", &n);
    int m = n;
    while(n != 0){
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    if(b == m)
        printf("N la so doi xung");
    else
        printf("N khong la so doi xung");
    return 0;
}
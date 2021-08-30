#include<stdio.h>
int main(){
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0;
    int Kq = 1, i;
    for(i =2 ; i <= n; i+=2){
        Kq *= x * x;
        Sum += Kq;
    }
    printf("Sum = %d", Sum);
}
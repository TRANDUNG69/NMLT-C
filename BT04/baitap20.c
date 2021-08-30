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
    for(i = 1; i <= n; i++){
        Kq *= x;
        Sum += Kq;
    }
    printf("Sum = %d", Sum);
}
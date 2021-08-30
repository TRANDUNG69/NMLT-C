#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0;
    int kq = 1, i;
    for( i = 1; i <= n; i++){
        kq *= i;
        Sum += kq;
    }
    printf("Sum = %d", Sum);
    return 0;
}
       
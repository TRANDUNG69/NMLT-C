#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int Sum = pow(x, n);
    printf("Sum = %d", Sum);
    return 0;
}
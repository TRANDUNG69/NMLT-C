#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int Kq = pow(x, 1.0/n);
    printf("Ket qua = %d", Kq);
    return 0;
}
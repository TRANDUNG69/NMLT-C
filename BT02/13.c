#include<stdio.h>
int F(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 1;
    if(n >= 3)
        return F(n - 1) + F(n - 2);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("So fibonaci thu %d la %d", n, F(n));
}
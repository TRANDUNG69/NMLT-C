#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0;
    for(i = 0; i <= n; i++)
        Sum += i;
    
    printf("Sum = %d", Sum);
    return  0;
}
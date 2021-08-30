#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0, i;
    for(i = 1; i <= n; i+=2)
        Sum += i;
    
    printf("Sum = %d", Sum);
    return  0;
}
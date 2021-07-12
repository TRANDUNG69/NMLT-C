#include<stdio.h>
int main(){
    int i, n, Sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        Sum += i;
    }
    printf("Sum = %d", Sum);
    return 0;
}
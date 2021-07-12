#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float sum = 0;
    for(i = 1; i <= n; i++){
        sum +=(float) 1/i;
    }
    printf("Tong la: %.1f", sum);
    return 0;
}
#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float sum = 0;
    for(i = 2; i <= n; i+=2){
        sum += (float) 1 / i;
    }
    printf("Tong la: %.2f", sum);
    return 0;
}
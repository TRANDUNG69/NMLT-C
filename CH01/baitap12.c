#include<stdio.h>
#include<math.h>
int main(){
    int i, n, x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    int sum = 0;
    int gt = 1;
    for(i = 1; i <= n; i++){
        gt *= x;
        sum += gt;
    }
    printf("Tong la: %d", sum);
    return 0;
}
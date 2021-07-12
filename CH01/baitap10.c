#include<stdio.h>
#include<math.h>
int main(){
    int i, n, x;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    int gt = 1;
    for(i = 1; i <= n; i++){
        gt *= x;
    }
    printf("Tong la: %d", gt);
    return 0;
}
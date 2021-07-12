#include<stdio.h>
#include<math.h>
int main(){
    int i, x, n;
    printf("Nhap gia tri cua x: ");
    scanf("%d", &x);
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);
    int sum = 0, gt = 1;
    for(i = 1; i <= n/2; i++){
        gt *= x*x;
        sum += gt;
    }
    // for(i = 2; i <= n; i+=2){
    //     sum += pow(x, i);
    // }
    // for(i = 2; i <= n; i+=2){
    //     gt *= x * x;
    //     sum += gt;
    // }
    printf("Tong la: %d", sum);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int i, n, x;
    printf("Nhap gia tri cua x: ");
    scanf("%d", &x);
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    // ! Cách 1
    // int sum = 0;
    // for(i = 1; i <= n; i+=2){
    //     sum += pow(x, i);
    // }

    // ? Cách 2
    int sum = x;
    int gt = x;
    for(i = 3; i <= n; i+=2)
    {
        gt *= x * x;
        sum += gt;
    }
    printf("Tong la: %d", sum);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int i, n, sum = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        sum *= i;
    }
    printf("Tong la: %d", sum);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sum = 0;
    for(i = 1; i <= n; i++){
        sum += i;
    }
    printf("Tong la: %d", sum);
    return 0;
}
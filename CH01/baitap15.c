#include<stdio.h>
#include<math.h>
int main(){
    int i, n, mau = 0;
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        mau += i;
        sum += (float) 1 / mau;
    }
    printf("Tong la: %.2f", sum);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float sum = 0;
    for(i = 1; i <= n; i+=2){
        sum += (float) i / (i + 1);
    }
    printf("Tong la: %.2f", sum);
    return 0;
}
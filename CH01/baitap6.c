#include<stdio.h>
#include<math.h>
int main(){
    int i, n, x;
    printf("Nhap x: ");
    scanf("%d", &x);
    float sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    // for(i = 1; i <= n; i++){
    //     sum += (float) 1 / (i * (pow(x, i+1)));
    // }
    int right = x;
    for(i = 1; i <= n; i++){
        right *= x;
        sum += (float) 1 / (i * right);
    }
    printf("Tong la: %.2f", sum);
    return 0;
    
}
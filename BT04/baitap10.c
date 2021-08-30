#include<stdio.h>
#include<math.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float Sum = 0;
    for(i = 1; i <= n; i++)
        Sum += 1.0 / i;
    printf("Sum = %.2f", Sum);
    return  0;
}
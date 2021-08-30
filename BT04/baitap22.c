#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0, i;
    for(i = 1; i <= n; i += 2){
        Sum += pow(x,i);
    }
    printf("Sum = %d", Sum);
    return 0;
}
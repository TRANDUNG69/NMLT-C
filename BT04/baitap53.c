#include<stdio.h>
#include<math.h>
int main(){
    int n, i;
    printf("Nhap n: ");
    scanf("%d", &n);
    for( i = 1; i <= 10; i++)
        printf("\n%d x %d = %d", n, i, n * i);
}
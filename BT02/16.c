#include<stdio.h>
int main(){
    int i, n, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int pt = n % 10;
        sum += pt;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}

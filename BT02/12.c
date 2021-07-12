#include<stdio.h>
int main(){
    int n;
    int f0 = 0, f1 = 1, fn;
    int i;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n == 1 || n == 2)
    {
        printf("%d", n);
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
        printf("%d", fn);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0 && i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("Tong cac uoc chan cua n la: %d", sum);
    return 0;
}
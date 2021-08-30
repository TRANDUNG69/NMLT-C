#include <stdio.h>
#include <math.h>
int main()
{
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int count = 0, sum = 0;
    float TBC;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            count++;
        }
    }
    TBC = (float)sum / count;
    printf("Xuat ket qua: %.2f", TBC);
    return 0;
}
#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    if (b == sqrt(a * a + c * c))
    {
        printf("Ba so vua nhap tao thanh tam giac vuong");
    }
    else
        printf("Ba canh vua nhap khong tao thanh tam giac vuong");
    return 0;
}
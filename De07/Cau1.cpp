#include<bits\stdc++.h>
void Input(float &x, int &n)
{
    printf("Nhap so thuc : ");
    scanf("%f", &x);
    printf("Nhap gia tri nguyen : ");
    scanf("%d", &n);
}
float F(float x, int n)
{
    float F;
    int tu;
    int mau = 0;
    if (n < 20)
    {
        for (int i = 1; i <= n; i++)
        {
            tu = x - i;
            mau += i;
            F = (float)tu / mau;
        }
    }
    else
    {
        F = (float)sqrt(n) + x;
    }
    return F;
}
int main()
{
    float y;
    int m;
    Input(y, m);
    printf("Gia tri cua bieu thuc la: %.2f", F(y, m));
    return 0;
}
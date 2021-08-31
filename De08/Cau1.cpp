 #include<bits\stdc++.h>

    void Input(float &x, int &n)
{
    printf("Nhap gia tri thuc: ");
    scanf("%f", &x);
    printf("Nhap gia tri nguyen: ");
    scanf("%d", &n);
}
float F(float x, int n)
{
    float F;
    int sum = 2008;
    if (n > 0)
    {
        for (int i = 1; i < n; i++)
        {
            sum += pow(-1, i + 1) * pow(x, i);
            F += sum;
        }
    }
    else
    {
        F = (float)abs(n) + (sin(3.14 * x / 180) * sin(3.14 * x / 180));
    }
    return F;
}
int main()
{
    float y;
    int m;
    Input(y, m);
    printf("Gia tri cua bieu thuc F = %.2f", F(y, m));
    return 0;
}
#include <bits\stdc++.h>
void Input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\ta[%d] = %d", i, a[i]);
    }
}
float TBCLe(int a[], int n)
{
    int dem = 0;
    float TBC;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            sum += a[i];
            dem++;
        }
    }
    TBC = (float)sum / dem;
    return TBC;
}
void SearchMin(int a[], int n)
{
    int count = 0;
    int Min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
        if (Min == a[i])
            count++;
    printf("\nPhan tu nho nhat trong mang la: %d", Min);
    printf("\nCo so phan tu min la: %d", count);
}
void Chen(int a[], int &n, int vt, int x)
{
    int dem1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            dem1++;
            vt = i + 1;
            for (int i = n; i > vt; i--)
            {
                a[i] = a[i - 1];
            }
            a[vt] = x;
            n++;
        }
    }
    if (dem1 == 0)
    {
        for (int i = n; i > vt; i--)
        {
            vt = i;
            a[i] = a[i - 1];
        }
        a[vt] = x;
        n++;
    }
}
int main()
{
    int a[100], n;
    printf("Nhap n: ");
    do
    {
        scanf("%d", &n);
        if (n < 5)
            printf("Nhap lai n: ");
    } while (n < 5);
    Input(a, n);
    printf("Mang vua nhap la: ");
    Output(a, n);
    printf("\nTrung binh cong cac phan tu le la: %.2f", TBCLe(a, n));
    SearchMin(a, n);
    int vt;
    int x;
    printf("\nNhap gia tri x can chen: ");
    scanf("%d", &x);
    Chen(a, n, vt, x);
    printf("\nMang sau khi chen la: ");
    Output(a, n);
    return 0;
}
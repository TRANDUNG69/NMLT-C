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
void In(int a[], int &n)
{
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            printf("\t%d", a[i]);
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 1)
            printf("\t%d", a[i]);
}
void TBC(int a[], int &n)
{
    float TBC;
    int dem = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && i % 2 != 0)
        {
            sum += a[i];
            dem++;
            TBC = (float)sum / dem;
        }
    }
    if (dem != 0)
    {
        printf("\nXuat gia tri TBC = %.2f", TBC);
    }
    else
    {
        printf("\nKhong co gia tri TBC");
    }
}
void TimSoAmMax(int a[], int &n)
{
    int Max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && a[i] > Max)
        {
            Max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
        if (Max == a[i])
        {
            printf("\nPhan tu am lon nhat la: %d", Max);
            printf("\nVi tri cua phan tu am lon nhat la: %d", i);
            break;
        }
}
int main()
{
    int a[100], n;
    printf("Nhap n: ");
    do
    {
        scanf("%d", &n);
        if (n < 2 || n > 35)
            printf("Nhap lai n: ");

    } while (n < 2 || n > 35);
    Input(a, n);
    printf("\nMang vua nhap la: ");
    Output(a, n);
    printf("\n");
    printf("\nPhan tu chan xep truoc, le xep sau la: ");
    In(a, n);
    TBC(a, n);
    TimSoAmMax(a, n);
    return 0;
}

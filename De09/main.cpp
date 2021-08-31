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
        printf("\ta[%d] = %d", i, a[i]);
}
void TimMin(int a[], int &n)
{
    int Min = a[0];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Min == a[i])
        {
            dem++;
        }
    }
    printf("\nPhan tu nho nhat la: %d", Min);
    printf("\nSo phan tu nho nhat la: %d", dem);
}
void SapXep(int a[], int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    int a[100], n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    Input(a, n);
    printf("Mang vua nhap la: ");
    Output(a, n);
    TimMin(a, n);
    SapXep(a, n);
    printf("\nMang sau khi sap xep la: ");
    Output(a, n);
    return 0;
}
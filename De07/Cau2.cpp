#include <bits\stdc++.h>
void Input(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}
void Output(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\ta[%d] = %.0f", i, a[i]);
    }
}
void TimPhanTuAm(float a[], int &n)
{
    int dem = 0;
    int tong = 0;
    float TBC;
    for (int i = 0; i < n; i++)
        if (a[i] < 0 && i % 2 == 0)
        {
            printf("\nXuat phan tu am: %.0f", a[i]);
            printf("\nXuat vi tri phan tu am: %d", i);
        }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && i % 2 == 0)
        {
            tong += a[i];
            dem++;
            TBC = (float)tong / dem;
        }
    }
    if (dem != 0)
    {
        printf("\nXuat TBC = %.2f", TBC);
    }
    else
        printf("\nKhong co TBC");
}
void Xoa(float a[], int &n, int vt)
{
    for (int i = vt; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}
void XoaMin(float a[], int &n)
{
    float Min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
        if (Min == a[i])
        {
            Xoa(a, n, i);
            break;
        }
}

int main()
{
    float a[100];
    int n;
    printf("Nhap n: ");
    do
    {
        scanf("%d", &n);
        if (n < 5 || n > 37)
            printf("Nhap lai n: ");
    } while (n < 5 || n > 37);
    Input(a, n);
    printf("Mang vua nhap la: ");
    Output(a, n);
    TimPhanTuAm(a, n);
    int vt;
    XoaMin(a, n);
    printf("\nMang sau khi xoa min la: ");
    Output(a, n);
    return 0;
}
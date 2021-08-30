#include <stdio.h>

void Input(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Output(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("\ta[%d] = %d", i, a[i]);
}
float TBC(int a[], int n)
{
    int sum = 0;
    int count = 0, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            sum += a[i];
            count++;
        }
    }
    printf("\nTrung binh cong cac phan tu le chia het cho 3 la: %.2f ", (float)sum / count);
}
void XepTang(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
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
void TimMax(int a[], int n)
{
    int Max = a[0];
    int vt, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
        }
    }
    for (i = 0; i < n; i++)
        if (Max == a[i])
            vt = i;
    printf("\nPhan tu lon nhat cua mang la: %d", Max);
    printf("\nVi tri cua phan tu lon nhat la: %d", vt);
}
void Xoa(int a[], int n, int vt)
{
    int i;
    for (i = vt; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void XoaPhanTuCuoi(int a[], int n, int x)
{
    int i;
    for (i = n; i > 0; i--)
    {
        if (a[i] == x)
        {
            Xoa(a, n, i);
            printf("\nMang sau khi xoa phan tu x cuoi cung la: ");
            Output(a, n);
            break;
        }
    }
}
float TBCLe(int a[], int n)
{
    int Sum = 0;
    int dem = 0, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            Sum += a[i];
            dem++;
        }
    }
    printf("\nTrung binh xong cua cac phan tu le cua mang la: %.2f", (float)Sum / dem);
}
void TimMin(int a[], int n)
{
    int Min = a[0];
    int dem = 0, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (Min == a[i])
            dem++;
    }
    printf("\nPhan tu nho nhat trong mang la: %d", Min);
    printf("\nMang co so phan tu nho nhat la: %d", dem);
}
void Chen(int a[], int n, int vt, int y)
{
    int i;
    for (i = n; i > vt; i--)
    {
        a[i] = a[i - 1];
    }
    a[vt] = y;
    n++;
}
void ChenSauY(int a[], int n, int vt1, int z)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > z)
        {
            vt1 = i + 1;
            for (i = n; i > vt1; i--)
            {
                a[i] = a[i - 1];
            }
            a[vt1] = z;
            n++;
        }
        break;
    }
}
int main()
{
    int a[100];
    int n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    Input(a, n);
    printf("\nMang vua nhap la: ");
    Output(a, n);
    TBC(a, n);
    XepTang(a, n);
    printf("\nMang sau khi sap xep tang dan la: ");
    Output(a, n);
    TimMax(a, n);
    int x;
    printf("\nNhap gia tri can xoa: ");
    scanf("%d", &x);

    TBCLe(a, n);
    TimMin(a, n);
    int vt, y;
    printf("\nNhap vi tri can chen: ");
    scanf("%d", &vt);
    printf("\nNhap gia tri cua y: ");
    scanf("%d", &y);
    Chen(a, n, vt, y);
    printf("\nMang sau khi chen la: ");
    Output(a, n);
    int vt1, z;
    printf("\nNhap gia tri can chen: ");
    scanf("%d", &z);
    ChenSauY(a, n, vt1, z);
    printf("\nMang sau khi chen la: ");
    Output(a, n);
    return 0;
}
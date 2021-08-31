#include <stdio.h>
void Input(int a[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Output(int a[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("\ta[%d] = %d", i, a[i]);
    }
}
void SearchMax(int a[], int n)
{
    int Max = a[0];
    int vt, i;
    for ( i = 0; i < n; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
        }
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i] == Max)
        {
            vt = i;
        }
    }
    printf("\nGia tri cua Max la: %d", Max);
    printf("\nVi tri cua max la: %d", vt);
}
void MangTang(int a[], int n)
{
    int i, j;
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = i + 1; j < n; j++)
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
void Xoa(int a[], int n, int vt)
{
    int i;
    for (i = vt; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}
void XoaXCuoi(int a[], int n, int x)
{
    int vt, i;
    int dem = 0;
    for ( i = n; i > 0; i--)
        if (a[i] == x)
        {
            dem++;
            vt = i;
            Xoa(a, n, vt);
            Output(a, n);
            break;
        }
    if (dem == 0)
        printf("Khong co gia tri cua x");
}

int main()
{
    int a[100], n;
    printf("Nhap gia tri cua n: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n > 30)
            printf("Nhap lai gia tri cua n: ");
    } while (n <= 0 || n > 30);
    Input(a, n);
    printf("\nXuat mang vua nhap: ");
    Output(a, n);
    SearchMax(a, n);
    MangTang(a, n);
    printf("\nMang sau khi xep tang dan la: ");
    Output(a, n);

    int vt, x;
    printf("\nNhap gia tri cua x: ");
    scanf("%d", &x);
    XoaXCuoi(a, n, x);

    return 0;
}
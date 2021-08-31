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
void XepGiam(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void SearchMax(int a[], int &n)
{
    int Max = a[0];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > Max)
        {
            Max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
        if (a[i] == Max)
        {
            dem++;
        }
    if (dem == 0)
    {
        printf("\nMang khong co max");
    }
    printf("\nGia tri lon nhat cua mang la: %d ", Max);
}
void Chen(int a[], int &n, int x)
{
    int dem1 = 0;
    int vt;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            vt = i;
            for (int j = n - 1; j >= vt; j--)
                a[j + 1] = a[j];
            a[vt] = x;
            dem1 = 1;
            break;
        }
    }
    if (dem1 == 0)
    {
        for (int i = n - 1; i >= 0; i--)
            a[i + 1] = a[i];
        a[0] = x;
    }
    n++;
}
int main()
{
    int a[100], n;
    printf("Nhap gia tri nguyen n: ");
    do
    {
        scanf("%d", &n);
        if (n < 5 || n > 50)
            printf("Nhap lai gia tri nguyen n: ");
    } while (n < 5 || n > 50);
    Input(a, n);
    printf("Mang vua nhap la: ");
    Output(a, n);
    XepGiam(a, n);
    printf("\nMang sau khi xep giam dan la: ");
    Output(a, n);
    SearchMax(a, n);

    int vt, x;
    printf("\nNhap gia tri can chen: ");
    scanf("%d", &x);
    Chen(a, n, x);
    printf("\nMang sau khi chen la: ");
    Output(a, n);
    return 0;
}
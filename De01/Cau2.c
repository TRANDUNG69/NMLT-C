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
void Sort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
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
void Sort1(int a[], int n)
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
int main()
{
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    Input(a, n);
    printf("Mang vua nhap la: ");
    Output(a, n);
    Sort(a, n);
    printf("\nMang sau khi sap xep la: ");
    Output(a, n);
    Sort1(a, n);
    printf("\nMang sau khi sap xep la: ");
    Output(a, n);
    return 0;
}

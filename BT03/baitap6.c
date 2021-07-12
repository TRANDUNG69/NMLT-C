#include <stdio.h>
int main()
{
    float x, y, z;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap y: ");
    scanf("%f", &y);
    printf("Nhap z: ");
    scanf("%f", &z);
    // TODO Tìm số lớn nhất
    if (x >= y && x >= z)
    {
        printf("So lon nhat la: %.0f", x);
    }
    else
    {
        if (z >= y)
        {
            printf("\nSo lon nhat la: %.0f", z);
        }
        else
            printf("\nSo lon nhat la: %.0f", y);
    }
    // !Tìm so nhỏ nhất
    if (x <= y && x <= z)
    {
        printf("\nSo nho nhat la: %.0f", x);
    }
    else
    {
        if (z >= y)
        {
            printf("\nSo nho nhat la: %.0f", z);
        }
        else
            printf("\nSo nho nhat la: %.0f", y);
    }
}

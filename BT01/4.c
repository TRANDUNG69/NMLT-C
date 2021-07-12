#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    printf("Nhap d: ");
    scanf("%d", &d);
    int max;
    if(a > b && a > c && a > d){
        max = a;
        printf("Gia tri lon nhat la: %d", max);
    }
    else if(b > a && b > c && b > d){
        max = b;
        printf("Gia tri lon nhat la: %d", max);
    }
    else if(c > a && c > b && c > d){
        max = c;
        printf("Gia tri lon nhat la: %d", max);
    }
    else if( a == b == c == d){
        printf("Khong co gia tri lon nhat\n");
    }
    return 0;
}
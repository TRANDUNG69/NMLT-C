#include<stdio.h>
int main(){
    int i, m, n, count = 1, UCLN, min;
    printf("Nhap m, n lan luot la: ");
    do{
        scanf("%d", &m);
        scanf("%d", &n);
        if((m == 1 || n == 1) || (n == 0 || m == 0)) printf("Nhap lai m, n lan luot la: ");
    }while ((m == 1 || n == 1) || (n == 0 || m == 0));
    if(m < m){
        min = m;
    }
    else{
        min = n;
    }
    for (i = min; i > 0; i--){
        if(m % i == 0 && n %i == 0){
            UCLN = i;
            break;
        }
    }
    if(UCLN == count){
        printf("Hai so nguyen to cung nhau");
    }
    else{
        printf("Khong phai 2 so nguyen to cung nhau");
    }
    return 0;
}
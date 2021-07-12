#include<stdio.h>
int main(){
    int tich = 1, i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            tich *= i;
        }
    }
    printf("Tich cac uoc cua %d la: %d", n, tich);
    return 0;
}
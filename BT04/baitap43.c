#include<stdio.h>

int TichSoLe(int n){
    int Tich = 1, i;
    for( i = 1; i <= n; i++){
        if(i % 2 != 0)
            Tich *= i;
    }
    return Tich;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac chu so le la: %d", TichSoLe(n));
    return 0;
}
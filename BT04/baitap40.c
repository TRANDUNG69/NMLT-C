#include<stdio.h>

int Tichsochan(int n){
    int Tich = 1, i;
    for( i = 1; i <= n; i++){
        if(i % 2 == 0){
            Tich *= i;
        }
    }
    return Tich;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tich cac so chan la: %d", Tichsochan(n));
    return 0;
}
#include<stdio.h>

int Tongsochan(int n){
    int sum = 0, i;
    for( i = 1; i <= n; i++){
        if(i % 2 == 0)
        sum += i;
    }
    return sum;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac chu so chan la: %d", Tongsochan(n));
    return 0;
}
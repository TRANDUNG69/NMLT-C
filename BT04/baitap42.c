#include<stdio.h>

int TongSoLe(int n){
    int Sum = 0, i;
    for( i = 1; i <= n; i++){
        if(i % 2 != 0)
            Sum += i;
    }
    return Sum;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac chu so le la: %d", TongSoLe(n));
    return 0;
}
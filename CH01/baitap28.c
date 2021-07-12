#include<stdio.h>
int main(){
    int i, n, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++){
        if( n % i == 0){
            sum += i;
        }
    }
    printf("Tong cac uoc so nho hon %d la: %d", n, sum);
    return 0;
}
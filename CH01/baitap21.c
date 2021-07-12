#include<stdio.h>
int main(){
    int sum = 0, i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    printf("Tong cac uoc so cua %d la: %d", n, sum);
    return 0;
}
#include<stdio.h>
int main(){
    int i, n, count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n % i == 0 && i % 2 == 0){
            count++;
        }
    }
    printf("So %d co tat ca %d uoc so chan", n, count);
    return 0;
}
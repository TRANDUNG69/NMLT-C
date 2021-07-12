#include<stdio.h>
int main(){
    int count = 0, i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    printf("So %d co tat ca %d uoc so!Hehe ", n, count);
    return 0;
}
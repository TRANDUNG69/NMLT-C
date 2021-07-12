#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = n / 2; i > 0; i--){
        if(n % i == 0 && i % 2 != 0){
           printf("Uoc le lon nhat cua %d la: %d",n, i);
           break;
        }
    }
}
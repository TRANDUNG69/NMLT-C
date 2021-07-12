#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("n la so chan\n");
    }
    else{
        printf("n la so le\n");
    }
    if(n > 0){
        printf("n la so nguyen duong\n");
    }
    else{
        printf("n la so nguyen am\n");
    }
    return 0;
}
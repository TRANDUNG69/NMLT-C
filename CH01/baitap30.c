#include<stdio.h>
int main(){
    int sum = 0, i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++){
        if( n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        printf("\nn la so hoan thien");
    }
    else{
        printf("n khong phai la so hoan thien");
    }
    return 0;
}
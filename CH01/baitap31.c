#include<stdio.h>
#include<math.h>
int main(){
    int sum = 0, count = 0, i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("n la so nguyen to");
    }
    else{
        printf("n khong phai la so nguyen to");
    }
    return 0;
}
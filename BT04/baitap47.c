#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0, i;
    for( i = 1; i < n; i++){
        if(n % i == 0){
            Sum += i;
        }
    }
    if(Sum == n){
        printf("n la so hoan thien");
    }
    else{
        printf("n khong phai la so hoan thien");
    }
   return 0;
}
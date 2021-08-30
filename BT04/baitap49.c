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
    if(n > Sum){
        printf("n la so khong tron ven");
    }
    else{
        printf("n la so tron ven");
    }
    return 0;
}
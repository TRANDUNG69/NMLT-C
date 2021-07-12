#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum  = 0, Sum1 = 0, Sum2 = 0;
    for(i = 0; i < n; i++){
        Sum += i;
    }
    for(i = 0; i < n; i++){
        if(i % 2 == 0){
            Sum1 += i;
        }
    }
    for(i = 0; i < n; i++){
        if(i % 2 != 0){
            Sum2 += i;
        }
    }
    printf("Sum = %d", Sum);
    printf("\nSum1 = %d", Sum1);
    printf("\nSum2 = %d", Sum2);
    return 0;
}
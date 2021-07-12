#include<stdio.h>
int main(){
    int i, a, b, min;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if(a < b){
        min = a;
    }
    else{
        min = b;
    }
    for(i = min; i > 0; i--){
        if(a % i == 0 && b% i == 0){
            printf("Uoc chung lon nhat la: %d", i);
            break;
        }
    }
    printf("\n");
    int BS = a * b;
    int max;
    if(a > b){
        max = a;
    }
    else{
        max = b;
    }
    for(i = max; i < BS; i++){
        if(i % a == 0 && i % b ==0){
            printf("\nBoi so chung nho nhat la: %d", i);
            break;
        }
    }
}
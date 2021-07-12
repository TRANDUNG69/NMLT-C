#include<stdio.h>
int main(){
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if(a > b){
        printf("So a lon hon so b\n");
    }
    else if(a < b){
        printf("So a nho hon so b\n");
    }
    else{
        printf("Hai so bang nhau");
    }
    return 0;
}
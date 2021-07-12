#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
       if(i % 2 == 0){
           printf("\nSo chan la: %d", i);
       }
    }
    printf("\n");
    for(i = 0; i < n; i++){
       if(i % 2 != 0){
           printf("\nSo le la: %d", i);
       }
    }
    return 0;
}
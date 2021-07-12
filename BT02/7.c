#include<stdio.h>
int main(){
    int i, n, count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++){
        if(n % i == 0){
            count++;
            printf("\nUoc la: %d", i);
        }
    }
    printf("\nAll uoc la: %d", count);
    
}
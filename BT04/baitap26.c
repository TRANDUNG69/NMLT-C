#include<stdio.h>

int main(){
    int n,i;
    printf("Nhap n: ");
    scanf("%d", &n);
    for( i = 1; i <= n; i++){
        if(i % 2 == 0)
            printf("\nUoc so chan la: %d", i);
    }
    return 0;
}
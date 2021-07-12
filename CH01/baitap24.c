#include<stdio.h>
int main(){
    int i, n, count = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i  = 1; i <= n; i++){
        if(n % i == 0 && i % 2 != 0){
            count++;
            printf("\nUoc so le thu %d cua so %d la: %d ",count, n, i);
        }
    }
    return 0;
}
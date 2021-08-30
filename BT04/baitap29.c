#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int dem = 0, i;
    for( i = 1; i <= n; i++){
        if(n % i == 0)
            dem++;
    }
    printf("So uoc la: %d", dem);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int dem = 0, i;
    for( i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
        dem++;
    }
    if(dem == 0)
            printf("n la so nguyen to");
    else
        printf("n khong phai la so nguyen to");
    return 0;
}
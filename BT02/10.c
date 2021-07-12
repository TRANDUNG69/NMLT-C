#include<stdio.h>
#include<math.h>
int main(){
    int i, n, dem;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++){
        dem = 0;
        while (n % i == 0)
        {
            ++dem;
            n /= i;
        }
        if(dem != 0){
            if(dem > 1) printf("%d^%d", i, dem);
            else printf("%d", i);
            if(n > i){
                printf(" * ");
            }
        }
    }
    if(dem == 0){
        printf("Khong phan tich duoc");
    }
    return 0;
}
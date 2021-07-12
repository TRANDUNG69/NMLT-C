#include<stdio.h>
#include<math.h>
int main(){
    int n, i;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(n < 2){
        printf("Khong phai la so nguyen to\n");
    }
    else{
        int count = 0;
        for(i = 2; i <= sqrt(n); i++){
            if(n%2==0){
                count++;
            }
        }
        if(count == 0){
            printf("La so nguyen to\n");
        }
        else{
            printf("Khong phai so nguyen to\n");
        }
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    printf("Nhap so cai banh muon mua: ");
    scanf("%d", &n);
    if( n >= 15){
        printf("So tien phai tra la: %d", (n*5000)-(n*5000)*0.2);
    }
    else{
        if(n >= 10){
            printf("So tien phai tra la: %.2f",(n*5000)-(n*5000)*0.15);
        }
        else if(n >= 5){
            printf("So tien phai tra la: %d", (n * 500)-(n * 5000)*0.1);
        }
        else{
            printf("So tien phai tra la: %d", n * 5000);
        }
    }
    return 0;
}
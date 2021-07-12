#include<stdio.h>
#include<math.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int gt = sqrt(n);
    if(gt*gt == n){
        printf("n la so chinh phuong");
    }
    else{
        printf("n khong phai la so chinh phuong");
    }
    return 0;
}
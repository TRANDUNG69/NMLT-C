#include<stdio.h>
#include<math.h>

int check(int n){
    while(n > 0){
        int temp = n % 10;
        if(temp % 2 != 0){
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(check(n) == 1){
        printf("n chua toan chu so chan");
    }
    else{
        printf("n khong chua toan chu so chan");
    }
    return 0;
}
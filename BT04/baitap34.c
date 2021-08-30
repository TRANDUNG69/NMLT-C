#include<stdio.h>
#include<math.h>

int checksnt(int n){
    int i;
    if(n < 2){
        return 0;
    }
    for( i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int Tichsnt(int n){
    int Tich = 1, i;
    for( i = 2; i < n; i++){
        if(checksnt(i) == 1){
            Tich *= i;
        }
    }
    return Tich;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tich cac so nguyen to la: %d", Tichsnt(n));
    return 0;
}
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
int Tongsnt(int n){
    int sum = 0, i;
    for( i = 2; i < n; i++){
        if(checksnt(i) == 1){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong so nguyen to la: %d", Tongsnt(n));
    return 0;
}
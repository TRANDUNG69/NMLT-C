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
int main(){
    int n, i;
    printf("Nhap n: ");
    scanf("%d", &n);
    for( i = 2; i <= n; i++){
        if(checksnt(i) == 1){
            printf("%d\t", i);
        }
    }
}
#include<stdio.h>
#include<math.h>

int checksochan(int n){
    int i;
    for( i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("So chan la: %d", i);
        }
    }
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    checksochan(n);
}
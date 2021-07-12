#include<stdio.h>
#include<math.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    // float sum = 0;
    // for(i = 1; i <= n; i++){
    //     sum = sqrt(2 + sum);
    // }

    float sum = sqrt(2)
    for(i = 2; i <= n; i++){
        sum = sqrt(2 + sum);
    }
    
    printf("Ket qua la: %.2f", sum);
    return 0;
}
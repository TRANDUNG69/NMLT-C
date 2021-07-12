#include<stdio.h>
#include<math.h>
int main(){
    int n, gt = 1, i;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(n==0){
        gt = 1;
    }
    else if(n > 0){
        for (i = n; i >= 1; i--)
        {
            gt *= i;
        }
    }
    printf("Ket qua la: %d", gt);
    return 0;
}
#include<stdio.h>

int TimUocChungMax(int a, int b, int n){
    int max, i;
    for( i = n; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            max = i;
        break;
        }
    }
    return max;
}
int main(){
    int a, b, n;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Uoc so chung lon nhat cua a va b la: %d", TimUocChungMax(a, b, n));
    return 0;
}
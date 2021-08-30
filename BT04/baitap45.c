#include<stdio.h>

int TimBoiChungMax(int a, int b, int n){
    int max, i;
    for( i = n; i >= 1; i--){
        if(i % a == 0 && i % b == 0){
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
    printf("Boi so chung lon nhat cua a va b la: %d", TimBoiChungMax(a, b, n));
    return 0;
}
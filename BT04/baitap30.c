#include<stdio.h>
int main(){
    int n, i;
    printf("Nhap n: ");
    scanf("%d", &n);
    for( i = n; i >=1; i--){
        if(n %  i == 0){
            printf("Uoc lon nhat la: %d", i);
            break;
        }
    }
    return 0;
}
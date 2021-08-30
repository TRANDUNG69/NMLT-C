#include<stdio.h>

int Demsole(int n){
    int dem  = 0, i;
    for( i = 1; i <= n; i++){
        if(i % 2 != 0)
            dem++;
    }
    return dem;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("So luong chu so le la: %d", Demsole(n));
    return 0;
}
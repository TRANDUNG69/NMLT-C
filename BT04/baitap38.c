#include<stdio.h>
#include<math.h>

int  demsochan(int n){
    int dem = 0, i;
    for( i = 1; i <= n; i++){
        if(i % 2 == 0)
            dem++;
    }
    return dem;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("So luong so chan la: %d", demsochan(n));
    return 0;
}
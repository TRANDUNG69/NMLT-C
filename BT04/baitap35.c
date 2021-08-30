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
int DemSoNtChan(int n){
    int dem = 0, i;
    for( i = 2; i < n; i++){
        if(checksnt(i) == 1 && i % 2 == 0)
            dem++;
    }
    return dem;
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("So luong cac chu so nguyen to chan la: %d", DemSoNtChan(n));
    return 0;
}
#include<stdio.h>
#include<math.h>
void Input(float x, int n){
    printf("Nhap gia tri cua : ");
    scanf("%f", &x);
    printf("Nhap gia tri nguyen : ");
    do{
        scanf("%d", &n);
        if(n <= 0) printf("Nhap lai gia tri cua : ");
    }while(n <= 0);
}
float F(float x, int n){
    float F;
    int mau  = 1;
    int tu = 0, i;
    if(n > 0){
        for( i = 1; i <= n; i++){
            tu = i;
            mau *= 2;
            F += (float) 2000 +  tu / mau;
        }
    }
    else{
        F = sqrt((n * n) + 1) + fabs(x);
    }
    return F;
}
int main(){
    float y;
    int m;
    Input(y, m);
    printf("Xuat gia tri cua F = %.2f", F(y, m));
    return 0;
}
#include<stdio.h>
#include<math.h>

void Input(float x, int n){
    printf("Nhap x: ");
    printf("Nhap n: "); 
    scanf("%d", &n);
    do{  
        scanf("%f", &x);
        if(x == 0){
            printf("Nhap lai x: ");
        }
    }
    while( x == 0);
}
float F(float x, int n){
    float S = 0,i;
    if(n>1 && x != 0){
        float mau = 1;
        int tu = 0;
        for( i = 1; i <= n; i++){
            tu += i;
            mau *= x;
            S += x + (tu / mau);
        }
    }
    else
        S = sin(x)*sin(x) + exp(x);
    return S;
}
int main(){
    float y;
    int m;
    Input(y, m);
    printf("Ket qua = %f", F(y, m));
    return 0;
}
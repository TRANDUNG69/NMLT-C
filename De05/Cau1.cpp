#include<bits\stdc++.h>
void NhapX(float &x){
    printf("Nhap gia tri thuc : ");
    scanf("%f", &x);
}
void NhapN(int &n){
    printf("Nhap gia tri nguyen : ");
    do{
        scanf("%d", &n);
        if(n <= 0) printf("Nhap lai gia tri nguyen : ");
    }while(n <= 0);
}
float F(float x){
    float F;
    if(x > 0){
        F = (float) 2 * x + 1;
    }
    else{
        F = (float) log(x) / log (15);
    }
    return F;
}
int F1(int n){
    int sum = 1;
    //int bt = 1;
    for(int i = 1; i <= n; i++){
        sum += pow(3, i);
        // bt *= 3;
        //sum += bt;
    }
    return sum;
}
int main(){
    float y;
    int m;
    NhapX(y);
    NhapN(m);
    printf("Gia tri cua bieu thuc la F = %.3f", F(y) + F1(m));
}
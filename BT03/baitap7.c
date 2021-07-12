#include<stdio.h>
int main(){
    int N;
    float D;
    printf("Nhap N: ");
    scanf("%d", &N);
    printf("Nhap D: ");
    scanf("%f", &D);
    float T;
    if(N < 10 || D < 10){
        T = N * 50000;
    }
    else if((N>=10 && N<=20)&&(D>=10000000 && D <= 30000000)){
        T = N * 75000 + (0.02 * D);
    }
    else if((N > 20)&&(D>=10000000&&D<=30000000)){
        T = N * 100000 + (0.02 * D);
    }
    else{
        T = N * 100000 + (0.04 * D);
    }
    printf("So tien nhan vien duoc linh la: %.2f", T);
    return 0;
}
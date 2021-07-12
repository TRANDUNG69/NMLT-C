#include<stdio.h>
#include<math.h>
#define e 2.71
#define PI 3.14
float F(int a, int b, float x){
    float F; 
    if(a + b != 0){
        F = pow(e, x)/(a + b);
    }
    else if( a == 0 && b == 0){
        F = 0;
    }
    else{
        float right = sin(x * PI / 180);
        F = sqrt(a * a + b * b + 100) + (right*right*right);
    }
    return F;
}
int main(){
    int a, b;
    float x;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Ket qua la: %.2f", F(a, b, x));
    return 0;
}
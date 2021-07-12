#include<stdio.h>
int main(){
    float a, b, c;
    printf("Nhap a, b c lan luot la: \n");
    do{
        scanf("%f", &a);
        if(a <= 0) printf("Nhap lai a: ");
        scanf("%f", &b);
        if(b <= 0) printf("Nhap lai b: ");
        scanf("%f", &c);
        if(c <= 0) printf("Nhap lai c: ");
    }while (a <= 0 || b <= 0 ||c <= 0);
    if(a + b > c && a + c > b && b + c >a){
        printf("Ba canh vua nhap tao thanh mot tam giac\n");
        printf("Day la tam giac thuong\n");
        if ((a * a + b * b == c * c) || (c * c + b * b == a * a) || (a * a + c * c == b * b))
        {
            printf("Day la giac vuong\n");
        }
        else if(a==b==c){
            printf("Day la tam giac deu\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Day la tam giac can\n");
        }
        else if (((a * a + b * b == c * c) || (c * c + b * b == a * a) || (a * a + c * c == b * b)) && (a==b||b==c||a==c))
        {
            printf("Day la tam giac vuong can");
        }
    }
    else{
        printf("Ba canh vua nhap khong tao thanh tam giac");
    }
    return 0;  
}
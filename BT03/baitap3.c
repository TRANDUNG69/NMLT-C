#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    printf("Nhap so a ");
    scanf("%f", &a);
    printf("Nhap so b ");
    scanf("%f", &b);
    printf("Nhap so c ");
    scanf("%f", &c);
    if(a >= b && a >= c){
        printf("So lon nhat la: %.0f", a);
    }
    else{
        if(b >= c){
            printf("So lon nhat la: %.0f", b);
        }
        else{
            printf("So lon nhat la: %.0f", c);
        }
    }
    return 0;
}
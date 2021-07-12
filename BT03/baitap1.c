#include<stdio.h>

int main(){
    float Tientra;
    printf("Nhap so tien phai tra: ");
    scanf("%f", &Tientra);
    if(Tientra > 300000){
        printf("Tien khuyen mai = %.0f", Tientra * 0.3);
    }
    else{
        if(Tientra >= 200000 && Tientra <= 300000){
            printf("Tien khuyen mai = %.0f", Tientra * 0.2);
        }
        else{
            printf("Khong duoc khuyen mai");
        }
    }
    return 0;
}
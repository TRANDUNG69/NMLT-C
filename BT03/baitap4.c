#include<stdio.h>
int main(){
    float Diemtongket;
    printf("Nhap diem tong ket: ");
    scanf("%f", &Diemtongket);
    if(Diemtongket >= 8){
        printf("Xep loai gioi");
    }
    else{
        if(Diemtongket >= 7 && Diemtongket < 8){
            printf("Xep loai kha");
        }
        else if(Diemtongket >= 5 && Diemtongket < 7){
            printf("Xep loai trung binh");
        }
        else if(Diemtongket >= 3 && Diemtongket < 5){
            printf("Xep loai yeu");
        }
        else{
            printf("Xep loai kem");
        }
    }
    return 0;
}
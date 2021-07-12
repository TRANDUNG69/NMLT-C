#include<stdio.h>
int main(){
    float diem;
    printf("Nhap diem cua ban: ");
    scanf("%f", &diem);
    if(diem >=0 && diem <= 10){
        printf("Diem hop le\n");
        if(diem>=5){
            printf("Duoc len lop\n");
        }
        else{
            printf("Hoc ngu cho hoc lai haha!!!\n");
        }
    }
    else{
        printf("Diem khong hop le\n");
    }
    printf("Diem cua ban la: %.2f", diem);
    return 0;
}
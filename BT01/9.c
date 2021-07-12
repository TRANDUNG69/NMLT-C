#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("Nhap a, b, c lan luot la: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a==0){
        if(b ==0){
            if(c==0){
                printf("Phuong trinh co vo so nghiem\n");
            }
            else{
                printf("Phuong trinh vo nghiem\n");
            }
        }
        else{
            printf("Phuong trinh co nghiem: %.2f", (float)-c/b);
        }
    }
    else{
        int delta = b * b - 4 * a * c;
        if(delta < 0){
            printf("Phuong trinh vo nghiem\n");
        }
        else if(delta > 0){
            printf("Phuong trinh co nghiem: %.2f", (float)((-b + sqrt(delta))/(2*a)));
            printf("\nPhuong trinh co nghiem: %.2f", (float)((-b - sqrt(delta))/(2*a)));
        }
        else{
            printf("\nPhuong trinh co nghiem duy nhat: %.2f", (float)-b/(2*a));
        }
    }
    return 0;
}
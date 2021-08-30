#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char s[20];
    printf("Nhap chuoi: ");
    gets(s);
    int dem = 0;
    for(i = 0; i <= strlen(s); i++){
        if(s[i] == ' '){
            dem++;
        }
    }
    printf("Xuat khoang trang: %d", dem);
    return 0;
}
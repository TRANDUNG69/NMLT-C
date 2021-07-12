#include<stdio.h>
int main(){
    int luachon;
    int D, R;
    printf("Menu cho ban lua chon\n");
    printf("Chon 1 de tinh dien tich hinh chu nhat\n");
    printf("Chon 2 de tinh chu vi hinh chu nhat\n");
    printf("Du ra su lua chon cua ban: ");
    scanf("%d", &luachon);
    switch (luachon)
    {
    case 1:{
        int DT;
        printf("Nhap D: ");
        scanf("%d", &D);
        printf("Nhap R: ");
        scanf("%d", &R);
        DT = D * R;
        printf("Dien tich hinh chu nhat la: %d", DT);
        break;
    }
    case 2:{
        int CV;
        printf("Nhap D: ");
        scanf("%d", &D);
        printf("Nhap R: ");
        scanf("%d", &R);
        CV = (D + R) * 2;
        printf("Chu vi hinh chu nhat la: %d", CV);
        break;
    }
    default:
        printf("Lua chon khong hop le");
        break;
    }
    return 0;
}
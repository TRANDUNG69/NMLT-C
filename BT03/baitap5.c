#include<stdio.h>
int main(){
    int luaChon;
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &luaChon);
    switch (luaChon)
    {
    case 1:{
        printf("Thang 1 co 31 ngay!!");
        break;
    }
    case 2:{
        printf("Thang 1 co 28 ngay!!");
        break;
    }
    case 3:{
        printf("Thang 1 co 31 ngay!!");
        break;
    }
    case 4:{
        printf("Thang 1 co 30 ngay!!");
        break;
    }
    case 5:{
        printf("Thang 1 co 31 ngay!!");
        break;
    }
    case 6:{
        printf("Thang 1 co 30 ngay!!");
        break;
    }
    case 7:{
        printf("Thang 1 co 31 ngay!!");
        break;
    }
    case 8:{
        printf("Thang 1 co 31 ngay!!");
        break;
    }
    case 9:{
        printf("Thang 1 co 30 ngay!!");
        break;
    }
    case 10:{
        printf("Thang 1 co 31 ngay!!");
        break;
    }
    case 11:{
        printf("Thang 1 co 30 ngay!!");
        break;
    }
    case 12:{
        printf("Thang 1 co 31 ngay!!");
        break;
    }
    default:
        printf("Lua chon cua ban khong hop le");
        break;
    }
    return 0;
}
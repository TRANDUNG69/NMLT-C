#include<stdio.h>

int main(){
    int luachon;
    printf("Dua ra lua chon cua ban: ");
    scanf("%d", &luachon);
    switch (luachon)
    {
    case 1:{ 
        printf("Day la thang 1");
        break;
        }
    case 2:{
        printf("Day la thang 2");
        break;
    }
    case 3:{
        printf("Day la thang 3");
        break;
    }
    case 4:{
        printf("Day la thang 4");
        break;
    }
    case 5:{
        printf("Day la thang 5");
        break;
    }
    case 6:{
        printf("Day la thang 6");
        break;
    }
    case 7:{
        printf("Day la thang 7");
        break;
    }
    case 8:{
        printf("Day la thang 8");
        break;
    }
    case 9:{
        printf("Day la thang 9");
        break;
    }
    case 10:{
        printf("Day la thang 10");
        break;
    }
    case 11:{
        printf("Day la thang 11");
        break;
    }
    case 12:{
        printf("Day la thang 12");
        break;
    }
    default:
        printf("Lua chon khong hop le!Leu leu\n");
        break;
    }
    return 0;
}
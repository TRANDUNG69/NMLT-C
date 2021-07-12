#include<stdio.h>

int main(){
    int S;
    printf("Nhap quang duong ");
    scanf("%d", &S);
    if(S > 6000){
        printf("So thoi gian di het = %d", 3000 + 4000 + (1000 * 3) + (S - 6000) * 5 );
    }
    else{
        if(S <= 6000){
            printf("So thoi gian di het la = %d",3000 + 4000 +(S - 5000 ) * 3);
        }
        else if(S <= 5000){
            printf("So thoi gian di het la = %d", 3000 + (S - 3000) * 2);
        }
        else if(S <= 3000){
            printf("So thoi gian di het la = %d", S * 1);
        }
    }
    return 0;
}
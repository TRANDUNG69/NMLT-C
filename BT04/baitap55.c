#include<stdio.h>

int main(){
    int i;
    for( i = 1; i < 50; i++){
        if(i % 2 == 0 || i == 11 || i == 25 || i == 37)   
        continue;
            printf("\nXuat so le: %d", i);
    }
}
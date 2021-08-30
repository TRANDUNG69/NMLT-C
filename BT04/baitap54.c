#include<stdio.h>
#include<math.h>

int main(){
    int i, j;
    for( i = 1; i <= 10; i++){
        for( j = 1; j <= 10; j++){
            printf("\n%d x %d = %d", i, j, i * j);
        }
        printf("\n********************");
    }
}
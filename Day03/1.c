#include<stdio.h>
int main(){
    // int i = 5;
    // int j = -1;
    // if(i > 0){
    //     if(j > 0){
    //         printf("i va j lon hon 0\n");
    //     }
    //     else{
    //         printf("No");
    //     }
    // }
    int i, j;
    // int count = 0;
    // for(i = 0; i < 3; i++){
    //     for(j = 0; j < 3; j++){
    //         printf("%5d", count++);
    //     }
    //     printf("\n");
    // }
    for(i = 0; i <= 100; i++){
        if(i >= 50){   
            break;
        }
      printf("\ni = %d", i);
    }

    for(i = 0; i <= 100; i++){
        if(i % 2 == 0){   
            continue;
        }
      printf("\ni = %d", i);
    }
    return 0;
}
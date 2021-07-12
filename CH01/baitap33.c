#include<stdio.h>
#include<math.h>
int main(){
    int i, j, n, count = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    // for(i = 1; i <= n; i++){
    //     for(j = 1; j <= i; j++){
    //         if(j*j == i)
    //         count++;
    //     }
    // }

    // for(i = 1; i*i <= n; i++){
    //    count++;
    // }

    for(i = 1; i <= n; i++){
        float x, y;
        x = sqrt(i);
        y = (int) x;
        if(x == y){
            count++;
        }
    }
    printf("Co tat ca %d so chinh phuong", count);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int i, n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++){
        int j, count = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0){
                count++;
            }
        }
        if(count == 0) printf("%d\t", i);
    }
    return 0;
}
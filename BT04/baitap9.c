#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0, i;
    for(i = 0; i <= n; i++)
        Sum += i * i;
    // for(int i = 0; i <= n; i++)
    //     Sum += pow(i, 2);
    
    printf("Sum = %d", Sum);
    return  0;
}
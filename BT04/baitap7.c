#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int Sum = 0;
    int i;
    for(i = 2; i <= n; i+= 2){
    	 Sum += i;
	}
    printf("Sum = %d", Sum);
    return 0;
}

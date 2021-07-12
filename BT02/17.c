#include<stdio.h>
#include<math.h>
int main(){
    int i, m, n, count =0;
    printf("Nhap m: ");
    scanf("%d", &m);
    printf("Nhap n: ");
    do{
        scanf("%d", &n);
        if(n <= m) printf("Nhap lai n: ");
    }while (m >= n);
    if(m < n){
        for (i = m; i <= n; i++)
        {
            int k = sqrt(i);
            if (k * k == i)
            {
                count++;
            }
        }
    }
    if(count == 0){
        printf("Khong co so nao");
    }
    else{
        printf("Co tat ca %d so nguyen to!!", count);
    }
    return 0;
}
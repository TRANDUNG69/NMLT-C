 #include<stdio.h>
 #include<math.h>
    int main(){
        int i, n;
        printf("Nhap n: ");
        scanf("%d", &n);
        float S = 2;
        for(i = 2; i <= n; i++){
            S +=(float) i / sqrt(n);
        }
        printf("Ket qua cua S = %.2f", S);
        return 0;
    }
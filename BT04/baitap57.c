#include<stdio.h>

void Input(int a[], int n){
    int i;
    for( i = 0; i < n; i++){
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Output(int a[], int n){
    int i;
    for( i = 0; i < n; i++)
        printf("\ta[%d] = %d", i, a[i]);
}
void Tang(int a[], int n){
    int i, j;
    for( i = 0; i < n - 1; i++){
        for( j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void Giam(int a[], int n){
    int i, j;
    for( i = 0; i < n - 1; i++){
        for( j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void Xoa(int a[], int n, int vt){
    int i;
    for( i = vt; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    n--;
}
void Chen(int a[], int n, int vt1, int x){
    int i;
    for( i = n; i > vt1; i--){
        a[i] = a[i-1];   
    }
    a[vt1] = x;
    n++;
}
int main(){
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    Input(a, n);
    printf("Mang vua nhap la: ");
    Output(a, n);
    Tang(a, n);
    printf("\nMang sau khi sap xep la: ");
    Output(a, n);
    Giam(a, n);
    printf("\nMang sau khi sap xep la: ");
    Output(a, n);
    int vt;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &vt);
    Xoa(a, n, vt);
    printf("Mang sau khi xoa la: ");
    Output(a, n);
    int vt1, x;
    printf("\nNhap vi tri can chen: ");
    scanf("%d", &vt1);
    printf("\nNhap gia tri can chen: ");
    scanf("%d", &x);
    Chen(a, n , vt1, x);
    printf("\nMang sau khi chen la: ");
    Output(a, n);
    return 0;
}
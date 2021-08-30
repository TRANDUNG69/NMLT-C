#include<stdio.h>
#include<stdlib.h>

void Input(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Output(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\ta[%d] = %d", i, a[i]);
    }
}
void XepTang(int a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void XepGiam(int a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
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
    for(i = vt; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}
void Chen(int a[], int n, int vt1, int x){
    int i;
    for(i = n; i > vt1; i--){
        a[i] = a[i - 1];
    }
    a[vt1] = x;
    n++;
}
int TongMang(int a[], int n){
    int Sum = 0, i;
    for(i = 0; i < n; i++){
        Sum += a[i];
    }
    return Sum;
}
int TongMangChan(int a[], int n){
    int Sum1 = 0, i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            Sum1 += a[i];
        }
    }
    return Sum1;
}
int  TimMax(int a[], int n){
    int Max = a[0], i;
    for(i = 0; i < n; i++){
        if(a[i] > Max)
            Max = a[i];
    }
    return Max;
}
int TimMin(int a[], int n){
    int Min = a[0], i;
    for(i = 0; i < n; i++){
        if(a[i] < Min)
            Min  = a[i];
    }
    return Min;
}
float TBCMang(int a[], int n){
    float TBC;
    int sum = 0;
    int count = 0, i;
    for(i = 0; i < n; i++){
        sum += a[i];
        count++;
    }
    TBC = (float) sum / count;
    return TBC;
}
int DemMax(int a[], int n){
    int max = a[0];
    int dem  = 0, i;
    for(i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            dem++;
        }
    }
    return dem;
}
int DemMin(int a[], int n){
    int dem1 = 0;
    int min = a[0], i;
    for(i = 0; i < n ; i++){
        if(a[i] < min){
            min = a[i];
            dem1++;
        }
    }
    return dem1;
}
void LietKeSoChan(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            printf("\ta[%d] = %d", i , a[i]);
        }
    }
}
void LietKeSoLe(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 != 0 ){
            printf("\ta[%d] = %d", i, a[i]);
        }
    }
}
void XoaMax(int a[], int n){
    int Max1 = a[0];
    int i;
    for(i = 0; i < n; i++){
        if(a[i] > Max1){
            Max1 = a[i];
        }
    }
    for(i = 0; i < n; i++)
        if(Max1 == a[i])
            Xoa(a, n, i);
}
void XoaMin(int a[], int n){
    int Min1 = a[0];
    int i;
    for(i = 0; i < n; i++){
        if(a[i] < Min1){
            Min1 = a[i];
        }
    }
    for(i = 0; i < n; i++)
        if(Min1 == a[i])
            Xoa(a, n, i);
}
void ChenMax(int a[], int n, int vt2, int y){
    int Max2 = a[0], i;
    for(i = 0; i < n; i++){
        if(a[i] > Max2){
            Max2 = a[i];
        }
    }
    for(i = 0; i < n; i++)
        if(Max2 == a[i]){
            vt2 = i;
        }
    for(i = n; i > vt2; i--){
        a[i] = a[i - 1];
    }
    a[vt2] = y;
    n++;
}
int main(){
    int a[100], n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    Input(a, n);
    printf("\nMang vua nhap la: ");
    Output(a, n);
    XepTang(a, n);
    printf("\nMang sau khi xep la: ");
    Output(a, n);
    XepGiam(a, n);
    printf("\nMang sau khi sap xep la: ");
    Output(a, n);
    int vt;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &vt);
    Xoa(a, n, vt);
    printf("\nMang sau khi xoa la: ");
    Output(a, n);
    int vt1, x;
    printf("\nNhap vi tri can chen: ");
    scanf("%d", &vt1);
    printf("\nNhap gia tri can chen: ");
    scanf("%d", &x);
    Chen(a, n , vt1, x);
    printf("\nMang sau khi chen la: ");
    Output(a, n);
    printf("\nTong cac phan tu cua mang la: %d ", TongMang(a, n));
    printf("\nTong mang chan la: %d ", TongMangChan(a, n));
    printf("\nMax la: %d", TimMax(a, n));
    printf("\nMin la: %d", TimMin(a, n));
    printf("\nTrung binh cong cac phan tu mang la: %.2f", TBCMang(a, n));
    printf("\nSo phan tu max cua mang la: %d", DemMax(a, n));
    printf("\nSo phan tu min cua mang la: %d", TimMin(a, n));
    printf("\nXuat cac phan tu chan cua mang: ");
    LietKeSoChan(a, n);
    printf("\nXuat cac phan tu le cua mang: ");
    LietKeSoLe(a, n);
    XoaMax(a, n);
    printf("\nMang sau khi xoa la: ");
    Output(a, n);
    XoaMin(a, n);
    printf("\nMang sau khi xoa la: ");
    Output(a, n);
    int vt2, y;
    printf("\nNhap gia tri can chen: ");
    scanf("%d", &y);
    ChenMax(a, n, vt2, y);
    printf("\nMang sau khi chen la: ");
    Output(a, n);
    return 0;
}
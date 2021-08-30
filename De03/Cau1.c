 #include<stdio.h>
int main(){
    int n;
    int SoDaoNguoc;
    printf("Nhap gia tri nguyen n: ");
    scanf("%d", &n);
    while (n > 0)
    {
        int tmp = n % 10;
        SoDaoNguoc = SoDaoNguoc * 10 + tmp;
        n /= 10;
    }
    printf("So dao nguoc cua so vua nhap la: %d", SoDaoNguoc);
    return 0;
}
    
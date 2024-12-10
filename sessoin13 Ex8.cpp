#include <stdio.h>


int ucln(int a, int b) {
    while (b != 0) { 
        int temp = b;
        b = a % b; 
        a = temp; 
    }
    return a; 
}

int main() {
    int a, b; 

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    int ketqua = ucln(a, b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ketqua);

    return 0;
}


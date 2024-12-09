#include <stdio.h>

int sum(int a, int b) {
    int c = a + b;
    printf("tong cua a va b la: %d ", c);
}
int main(void) {
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);

    printf("Nhap so b: ");
    scanf("%d", &b);

    sum(a,b);
}

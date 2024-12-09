#include <stdio.h>
#include <math.h>
void checkPrime(int n) {
    if(n < 2) {
        printf("%d Khong phai la so nguyen to !!\n", n);
        return;
    }

    for(int i = 2; i <= sqrt(n); i++) {
       if(n % i == 0) {
           printf("%d Khong phai la so nguyen to !!\n", n);
           return;
       }
    }
     printf("%d la so nguyen to\n", n);
    }
int main(void) {
    int num1, num2;
    printf("---Nhap 2 so nguyen---\n");
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    checkPrime(num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    checkPrime(num2);
}

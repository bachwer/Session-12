#include <stdio.h>
#include <math.h>
void checkPerfect(int n) {
    int temp = 0;
    for(int i = 1 ; i < n; i++) {
        if(n % i == 0) {
            temp = temp + i;
        }
    }
    if(temp == n) {
        printf("True\n");
    }else {
        printf("False\n");
    }
    }
int main(void) {
    int num1, num2;
    printf("---Nhap 2 so nguyen---\n");
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    checkPerfect(num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    checkPerfect(num2);
}

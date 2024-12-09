#include <stdio.h>

void arrOut(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main(void) {
    int arr[10] = {3,5,1,5,7,9,3,2,1,2};
    int n = sizeof(arr) / sizeof(int);
    arrOut(arr, n);
}

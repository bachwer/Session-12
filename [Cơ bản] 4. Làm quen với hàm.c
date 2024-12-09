#include <stdio.h>

void arrOut(int arr[], int n) {
    int temp = 0;
    for(int i = 0; i < n; i++) {
       if(temp < arr[i]) {
           temp = arr[i];
       }
    }
    printf("So lon nhat trong mang la: %d", temp);
}

int main(void) {
    int arr[10] = {3,5,1,5,7,9,3,2,1,2};
    int n = sizeof(arr) / sizeof(int);
    arrOut(arr, n);
}

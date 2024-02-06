#include<stdio.h>

void printArray(int *arr, int n) {
    for (int  i = 0; i < n;  i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int  *arr, int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        int isSorted = 1;
        for (int j = 0; j < n-1-i; j++) {  
            if (arr[j] > arr[j+1]) {
                isSorted = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        printArray(arr, n);

        if (isSorted) {
            printf("array  sorted on the %d index", i);
            break;
        }
    }
}

int main() {
    int arr[] = {7 ,1, 3, 4, 2, 5, 8, 11, 6, 24, 20};
    int n = 11;
    printArray(arr, n);
    printf("\n");
    bubbleSort(arr, n);
    return 0;
}
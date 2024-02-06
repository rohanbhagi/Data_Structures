#include<stdio.h>

void printArray(int *arr, int n) {
    for (int  i = 0; i < n;  i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void insertionSort(int *arr, int n) {
    int key, j;
    for(int i = 1; i<= n-1; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
        printArray(arr, n);
    } 
}

int main() {
    int arr[] = {7 ,1, 3, 4, 2, 5, 8, 11, 6, 24, 20};
    int n = 11;
    printArray(arr, n);
    printf("\n");
    insertionSort(arr, n);
    return 0;
}
#include<stdio.h>

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int *arr, int n) {
    printf("Starting Bubble Sort");

    int temp;
    int isSorted = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j+1]; 
                arr[j+1] = arr[j];
                arr[j] = temp;
                isSorted = 0;
            }
        }

        if (isSorted) {
            break;
        }
    }
}

void insertionSort(int *arr, int n) {
    printf("Starting  Insertion Sort\n");

    int key, j;
    for(int i=0; i<n; i++) {
        key = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

void selectionSort(int *arr, int n) {
    printf("Starting  Selection Sort\n");


}

int main() {
    int arr1[] = {7 ,1, 3, 4, 2, 5, 8, 11, 6, 24, 20};
    int arr2[] = {7 ,1, 3, 4, 2, 5, 8, 11, 6, 24, 20};
    int arr1[] = {7 ,1, 3, 4, 2, 5, 8, 11, 6, 24, 20};
    int n = 11;
    printArray(arr1, n);
    printf("\n");
    bubbleSort(arr1, n);
    printf("\n");
    printArray(arr1, n);
    printArray(arr2, n);
    printf("\n");
    insertionSort(arr2, n);
    printArray(arr2, n);
    return 0;
}
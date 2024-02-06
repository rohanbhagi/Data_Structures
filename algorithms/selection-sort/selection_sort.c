#include<stdio.h>

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void selectionSort(int  *arr, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        int indexOfMin = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[indexOfMin]) {
                indexOfMin = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

int main(){
    int arr[] = {7 ,1, 3, 4, 2, 5, 8, 11, 6, 24, 20};
    int n = 11;
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
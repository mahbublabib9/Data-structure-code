#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n) {
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        }
    }
}
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
}
    printf("\n");
}
int main() {
    int arr[] = {90, 80, 30, 70, 20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Sorted array in ascending order: ");
    printArray(arr, n);
    return 0;
}


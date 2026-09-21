# include<stdio.h>
void bubble_Sort(int arr[], int start, int end);
void insertionSortDescending(int arr[], int start, int end);
void quickSortAscending(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void printArray(int arr[], int size);

int main() {
    int arr[10] = {12, 34, 54, 2, 45, 90, 23, 67, 8};
    int size = 9;
    int target;
    int midIdx = size / 2; 

    printf("Original Array: ");
    printArray(arr, size);

    printf("Enter the element to search: ");
    if (scanf("%d", &target) != 1) return 1;

    if (arr[midIdx] == target) {
        printf("\n[Element found in the middle!]\n");
        printf("Returned Index: %d\n", midIdx);
        bubble_Sort(arr, 0, midIdx - 1);
        printf("After sorting left side (Worst - Bubble Sort Descending): ");
        printArray(arr, size);
        insertionSortDescending(arr, midIdx + 1, size - 1);
        printf("After sorting right side (Best - Insertion Sort Descending): ");
        printArray(arr, size);
    } 
    else {
        printf("\n[Element NOT found in the middle!]\n");
        
        for (int i = size; i > midIdx; i--) {
            arr[i] = arr[i - 1];
        }
        arr[midIdx] = target;
        size++; 

        printf("Array after inserting target in the middle: ");
        printArray(arr, size);
    }

    quickSortAscending(arr, 0, size - 1);
    printf("\nFinal Array sorted in ascending order (Best - Quick Sort): ");
    printArray(arr, size);

    return 0;
}

void bubble_Sort(int arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        for (int j = start; j < end - (i - start); j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void insertionSortDescending(int arr[], int start, int end) {
    for (int i = start + 1; i <= end; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= start && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void quickSortAscending(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSortAscending(arr, low, pi - 1);
        quickSortAscending(arr, pi + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
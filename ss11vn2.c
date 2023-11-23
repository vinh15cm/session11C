#include <iostream>

void inputArray(int arr[], int n) {
    std::cout << "Nh?p giá tr? cho m?ng:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Ph?n t? th? " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}


void displayArray(int arr[], int n) {
    std::cout << "M?ng sau khi nh?p:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Nh?p s? ph?n t? c?a m?ng: ";
    std::cin >> n;

    int arr[n];

    
    inputArray(arr, n);
    displayArray(arr, n);

    
    insertionSort(arr, n);
    std::cout << "M?ng sau khi s?p x?p b?ng Insertion Sort:" << std::endl;
    displayArray(arr, n);

    
    selectionSort(arr, n);
    std::cout << "M?ng sau khi s?p x?p b?ng Selection Sort:" << std::endl;
    displayArray(arr, n);

    
    bubbleSort(arr, n);
    std::cout << "M?ng sau khi s?p x?p b?ng Bubble Sort:" << std::endl;
    displayArray(arr, n);

    return 0;
}

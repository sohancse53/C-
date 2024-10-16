#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++) { // Fix loop condition
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]); // Move pivot to correct position
    return i + 1; // Return the index of the pivot
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pidx = partition(a, low, high);
        quickSort(a, low, pidx - 1);
        quickSort(a, pidx + 1, high);
    }
}

int main() {
    int a[] = {10, 5, 11, 52, 3};
    int n = sizeof(a) / sizeof(a[0]); // Calculate size of array
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

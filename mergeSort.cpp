#include <bits/stdc++.h>
using namespace std;

void conquer(int arr[], int si, int mid, int ei) {
    int merged[ei - si + 1]; // Size of merged array
    int idx1 = si, idx2 = mid + 1;
    int x = 0;

    // Merging two halves
    while (idx1 <= mid && idx2 <= ei) {
        if (arr[idx1] <= arr[idx2]) { // Use arr[idx2] instead of idx2
            merged[x++] = arr[idx1++]; // Use arr[idx1] instead of merged[idx1]
        } else {
            merged[x++] = arr[idx2++];
        }
    }

    // Copy remaining elements of left half, if any
    while (idx1 <= mid) {
        merged[x++] = arr[idx1++];
    }
    // Copy remaining elements of right half, if any
    while (idx2 <= ei) {
        merged[x++] = arr[idx2++];
    }

    // Copy the merged array back to the original array
    for (int i = 0; i < x; i++) { 
        arr[si +i] = merged[i]; 
    }
}

void divide(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }
    int mid = si + (ei - si) / 2;
    divide(arr, si, mid);
    divide(arr, mid + 1, ei);
    conquer(arr, si, mid, ei);
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]); // Use sizeof to determine size
    divide(arr, 0, n - 1);
    for (int i = 0; i < n; i++) { // Use n for loop iteration
        cout << arr[i] << " ";
    }
    return 0;
}
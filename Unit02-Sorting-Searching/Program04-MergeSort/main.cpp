#include <iostream.h>
#include <conio.h>

#define MAX 1000

void merge(int arr[], int left, int mid, int right) {
    int temp[MAX];
    int i = left;
    int j = mid + 1;
    int k = 0;
    int p;

    /* Merge both sorted halves */
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}

void mergeSort(int arr[], int left, int right) {
    int mid;

    if (left >= right) {
        return;
    }

    mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    int arr[MAX];
    int n, i;

    clrscr();

    cout << "Enter number of elements (max " << MAX << "): ";
    cin >> n;

    if (n < 0 || n > MAX) {
        cout << "Invalid size.\n";
        getch();
        return 1;
    }

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n > 0) {
        mergeSort(arr, 0, n - 1);
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    getch();
    return 0;
}
output: 
Enter number of elements (max 1000): 6
Enter array elements: 38 27 43 3 9 82
Sorted array: 3 9 27 38 43 82

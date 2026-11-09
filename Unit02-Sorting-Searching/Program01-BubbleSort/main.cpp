#include <iostream.h>
#include <conio.h>

#define MAX 1000

int main() {
    int arr[MAX];
    int n;
    int i, j, temp, swapped;

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

    /* Bubble Sort */
    for (i = 0; i < n - 1; i++) {
        swapped = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        /* If no two elements were swapped, array is already sorted */
        if (!swapped) {
            break;
        }
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
Enter array elements: 64 34 25 12 22 11
Sorted array: 11 12 22 25 34 64

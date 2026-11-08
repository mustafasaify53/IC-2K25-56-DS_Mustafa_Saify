#include <iostream.h>
#include <conio.h>

#define MAX 1000

int main() {
    int arr[MAX];
    int n;
    int i, j, key;

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

    /* Insertion Sort */
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1] that are greater than key to one position ahead */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    getch();
    return 0;
}
ouput:
Enter number of elements (max 1000): 6
Enter array elements: 12 11 13 5 6 7
Sorted array: 5 6 7 11 12 13

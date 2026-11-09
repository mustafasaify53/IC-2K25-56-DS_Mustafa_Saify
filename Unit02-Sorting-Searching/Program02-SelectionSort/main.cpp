#include <iostream.h>
#include <conio.h>

#define MAX 1000 

int main() {
    int arr[MAX];
    int n;
    int i, j, minIndex, temp;

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

    /* Selection Sort */
    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        /* Swap the found minimum element with the first element */
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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
Enter array elements: 29 10 14 37 13 5
Sorted array: 5 10 13 14 29 37

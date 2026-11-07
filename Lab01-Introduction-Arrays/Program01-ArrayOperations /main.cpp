#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n, choice;
    int i, position, value, found;

    clrscr();

    cout << "Enter size of array (max " << MAX << "): ";
    cin >> n;

    if (n < 0 || n > MAX) {
        cout << "Invalid size.\n";
        getch();
        return 1;
    }

    if (n > 0) {
        cout << "Enter array elements: ";
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    do {
        cout << "\n----- ARRAY OPERATIONS -----\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (n == 0) {
                cout << "Array is empty.\n";
            } else {
                cout << "Array: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
            break;

        case 2:
            if (n >= MAX) {
                cout << "Array is full (Overflow). Cannot insert.\n";
                break;
            }

            cout << "Enter position (1 to " << n + 1 << ") and value: ";
            cin >> position >> value;

            if (position < 1 || position > n + 1) {
                cout << "Invalid position.\n";
            } else {
                /* Shift elements right to create space */
                for (i = n; i >= position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position - 1] = value;
                n++;
                cout << "Element inserted successfully.\n";
            }
            break;

        case 3:
            if (n == 0) {
                cout << "Array is empty (Underflow). Cannot delete.\n";
                break;
            }

            cout << "Enter position to delete (1 to " << n << "): ";
            cin >> position;

            if (position < 1 || position > n) {
                cout << "Invalid position.\n";
            } else {
                /* Shift elements left to fill gap */
                for (i = position - 1; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                cout << "Element deleted successfully.\n";
            }
            break;

        case 4:
            if (n == 0) {
                cout << "Array is empty.\n";
                break;
            }

            cout << "Enter value to search: ";
            cin >> value;

            found = 0;
            for (i = 0; i < n; i++) {
                if (arr[i] == value) {
                    cout << "Element found at position " << i + 1 << ".\n";
                    found = 1;
                    break;
                }
            }

            if (!found) {
                cout << "Element not found.\n";
            }
            break;

        case 0:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    getch();
    return 0;
}

output:

Enter size of array (max 100): 5
Enter array elements: 10 20 30 40 50

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 1
Array: 10 20 30 40 50 

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 2
Enter position (1 to 6) and value: 3 25
Element inserted successfully.

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 1
Array: 10 20 25 30 40 50 

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 3
Enter position to delete (1 to 6): 2
Element deleted successfully.

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 1
Array: 10 25 30 40 50 

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 4
Enter value to search: 30
Element found at position 3.

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 4
Enter value to search: 99
Element not found.

----- ARRAY OPERATIONS -----
1. Display Array
2. Insert Element
3. Delete Element
4. Search Element
0. Exit
Enter your choice: 0
Exiting program.

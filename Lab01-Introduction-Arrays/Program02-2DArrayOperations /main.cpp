#include <iostream.h>
#include <conio.h>

#define MAX 20

int main() {
    int arr[MAX][MAX];
    int rows, cols, choice;
    int i, j, sum;

    clrscr();

    cout << "Enter number of rows and columns (max " << MAX << "): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > MAX || cols < 1 || cols > MAX) {
        cout << "Invalid matrix dimensions.\n";
        getch();
        return 1;
    }

    cout << "Enter matrix elements:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    do {
        cout << "\n----- 2D ARRAY OPERATIONS -----\n";
        cout << "1. Display Matrix\n";
        cout << "2. Transpose Matrix\n";
        cout << "3. Calculate Row Sums\n";
        cout << "4. Calculate Column Sums\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Matrix:\n";
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    cout << arr[i][j] << "\t";
                }
                cout << "\n";
            }
            break;

        case 2:
            cout << "Transpose of Matrix:\n";
            for (j = 0; j < cols; j++) {
                for (i = 0; i < rows; i++) {
                    cout << arr[i][j] << "\t";
                }
                cout << "\n";
            }
            break;

        case 3:
            for (i = 0; i < rows; i++) {
                sum = 0;
                for (j = 0; j < cols; j++) {
                    sum += arr[i][j];
                }
                cout << "Sum of row " << i + 1 << " = " << sum << "\n";
            }
            break;

        case 4:
            for (j = 0; j < cols; j++) {
                sum = 0;
                for (i = 0; i < rows; i++) {
                    sum += arr[i][j];
                }
                cout << "Sum of column " << j + 1 << " = " << sum << "\n";
            }
            break;

        case 0:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    getch();
    return 0;
}

output:

Enter number of rows and columns (max 20): 3 3
Enter matrix elements:
1 2 3
4 5 6
7 8 9

----- 2D ARRAY OPERATIONS -----
1. Display Matrix
2. Transpose Matrix
3. Calculate Row Sums
4. Calculate Column Sums
0. Exit
Enter your choice: 1
Matrix:
1	2	3	
4	5	6	
7	8	9	

----- 2D ARRAY OPERATIONS -----
1. Display Matrix
2. Transpose Matrix
3. Calculate Row Sums
4. Calculate Column Sums
0. Exit
Enter your choice: 2
Transpose of Matrix:
1	4	7	
2	5	8	
3	6	9	

----- 2D ARRAY OPERATIONS -----
1. Display Matrix
2. Transpose Matrix
3. Calculate Row Sums
4. Calculate Column Sums
0. Exit
Enter your choice: 3
Sum of row 1 = 6
Sum of row 2 = 15
Sum of row 3 = 24

----- 2D ARRAY OPERATIONS -----
1. Display Matrix
2. Transpose Matrix
3. Calculate Row Sums
4. Calculate Column Sums
0. Exit
Enter your choice: 4
Sum of column 1 = 12
Sum of column 2 = 15
Sum of column 3 = 18

----- 2D ARRAY OPERATIONS -----
1. Display Matrix
2. Transpose Matrix
3. Calculate Row Sums
4. Calculate Column Sums
0. Exit
Enter your choice: 0
Exiting program.

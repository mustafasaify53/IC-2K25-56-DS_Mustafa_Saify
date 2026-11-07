#include <iostream.h>
#include <conio.h>

#define MAX 20
#define MAX_ELEMENTS 401

int main() {
    int matrix[MAX][MAX];
    int triplet[MAX_ELEMENTS][3];
    int rows, cols;
    int count = 1;
    int i, j, column;

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
            cin >> matrix[i][j];

            /* Store only non-zero elements */
            if (matrix[i][j] != 0) {
                triplet[count][0] = i;
                triplet[count][1] = j;
                triplet[count][2] = matrix[i][j];
                count++;
            }
        }
    }

    /* Store rows, columns, and total non-zero elements in row 0 */
    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = count - 1;

    cout << "\nSparse Matrix in Triplet Representation:\n";
    cout << "Row\tColumn\tValue\n";
    for (i = 0; i < count; i++) {
        cout << triplet[i][0] << "\t"
             << triplet[i][1] << "\t"
             << triplet[i][2] << "\n";
    }

    cout << "\nTranspose in Triplet Representation:\n";
    cout << "Row\tColumn\tValue\n";
    cout << cols << "\t" << rows << "\t" << count - 1 << "\n";

    for (column = 0; column < cols; column++) {
        for (i = 1; i < count; i++) {
            if (triplet[i][1] == column) {
                cout << triplet[i][1] << "\t"
                     << triplet[i][0] << "\t"
                     << triplet[i][2] << "\n";
            }
        }
    }

    getch();
    return 0;
}

output:

Enter number of rows and columns (max 20): 4 4
Enter matrix elements:
0 0 5 0
2 0 0 0
0 8 0 0
0 0 0 9

Sparse Matrix in Triplet Representation:
Row	Column	Value
4	4	4
0	2	5
1	0	2
2	1	8
3	3	9

Transpose in Triplet Representation:
Row	Column	Value
4	4	4
0	1	2
1	2	8
2	0	5
3	3	9

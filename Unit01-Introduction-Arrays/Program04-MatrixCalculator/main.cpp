#include <iostream.h>
#include <conio.h>

#define MAX 10

void readMatrix(double matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(double matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}

double determinant(double matrix[MAX][MAX], int n) {
    if (n == 1) {
        return matrix[0][0];
    }

    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    double det = 0;
    double minor[MAX][MAX];

    for (int column = 0; column < n; column++) {
        int minorRow = 0;

        for (int i = 1; i < n; i++) {
            int minorColumn = 0;

            for (int j = 0; j < n; j++) {
                if (j != column) {
                    minor[minorRow][minorColumn] = matrix[i][j];
                    minorColumn++;
                }
            }
            minorRow++;
        }

        int sign = (column % 2 == 0) ? 1 : -1;
        det += sign * matrix[0][column] * determinant(minor, n - 1);
    }

    return det;
}

int main() {
    double first[MAX][MAX];
    double second[MAX][MAX];
    double result[MAX][MAX];

    int choice, rows, cols, rows2, cols2;
    int i, j, k;

    clrscr();

    do {
        cout << "\n----- MATRIX CALCULATOR -----\n";
        cout << "1. Matrix Addition\n";
        cout << "2. Matrix Multiplication\n";
        cout << "3. Matrix Transpose\n";
        cout << "4. Determinant\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            cout << "Enter rows and columns of first matrix: ";
            cin >> rows >> cols;

            if (rows < 1 || rows > MAX || cols < 1 || cols > MAX) {
                cout << "Invalid dimensions.\n";
                continue;
            }

            cout << "Enter first matrix elements:\n";
            readMatrix(first, rows, cols);

            cout << "Enter rows and columns of second matrix: ";
            cin >> rows2 >> cols2;

            if (rows2 < 1 || rows2 > MAX || cols2 < 1 || cols2 > MAX) {
                cout << "Invalid dimensions.\n";
                continue;
            }

            cout << "Enter second matrix elements:\n";
            readMatrix(second, rows2, cols2);

            if (choice == 1) {
                if (rows != rows2 || cols != cols2) {
                    cout << "Matrices must have equal dimensions.\n";
                    continue;
                }

                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        result[i][j] = first[i][j] + second[i][j];
                    }
                }

                cout << "Sum of matrices:\n";
                displayMatrix(result, rows, cols);
            } else {
                if (cols != rows2) {
                    cout << "Matrices cannot be multiplied (Cols of A != Rows of B).\n";
                    continue;
                }

                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols2; j++) {
                        result[i][j] = 0;
                        for (k = 0; k < cols; k++) {
                            result[i][j] += first[i][k] * second[k][j];
                        }
                    }
                }

                cout << "Product of matrices:\n";
                displayMatrix(result, rows, cols2);
            }

        } else if (choice == 3) {
            cout << "Enter rows and columns: ";
            cin >> rows >> cols;

            if (rows < 1 || rows > MAX || cols < 1 || cols > MAX) {
                cout << "Invalid dimensions.\n";
                continue;
            }

            cout << "Enter matrix elements:\n";
            readMatrix(first, rows, cols);

            cout << "Transpose of matrix:\n";
            for (j = 0; j < cols; j++) {
                for (i = 0; i < rows; i++) {
                    cout << first[i][j] << "\t";
                }
                cout << "\n";
            }

        } else if (choice == 4) {
            cout << "Enter order of square matrix: ";
            cin >> rows;

            if (rows < 1 || rows > MAX) {
                cout << "Invalid order.\n";
                continue;
            }

            cout << "Enter matrix elements:\n";
            readMatrix(first, rows, rows);

            cout << "Determinant = " << determinant(first, rows) << "\n";

        } else if (choice != 0) {
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    getch();
    return 0;
}

output:

----- MATRIX CALCULATOR -----
1. Matrix Addition
2. Matrix Multiplication
3. Matrix Transpose
4. Determinant
0. Exit
Enter your choice: 1
Enter rows and columns of first matrix: 2 2
Enter first matrix elements:
1 2
3 4
Enter rows and columns of second matrix: 2 2
Enter second matrix elements:
5 6
7 8
Sum of matrices:
6	8	
10	12	

----- MATRIX CALCULATOR -----
1. Matrix Addition
2. Matrix Multiplication
3. Matrix Transpose
4. Determinant
0. Exit
Enter your choice: 2
Enter rows and columns of first matrix: 2 3
Enter first matrix elements:
1 2 3
4 5 6
Enter rows and columns of second matrix: 3 2
Enter second matrix elements:
7 8
9 1
2 3
Product of matrices:
31	19	
85	55	

----- MATRIX CALCULATOR -----
1. Matrix Addition
2. Matrix Multiplication
3. Matrix Transpose
4. Determinant
0. Exit
Enter your choice: 3
Enter rows and columns: 2 3
Enter matrix elements:
1 2 3
4 5 6
Transpose of matrix:
1	4	
2	5	
3	6	

----- MATRIX CALCULATOR -----
1. Matrix Addition
2. Matrix Multiplication
3. Matrix Transpose
4. Determinant
0. Exit
Enter your choice: 4
Enter order of square matrix: 3
Enter matrix elements:
6 1 1
4 -2 5
2 8 7
Determinant = -306

----- MATRIX CALCULATOR -----
1. Matrix Addition
2. Matrix Multiplication
3. Matrix Transpose
4. Determinant
0. Exit
Enter your choice: 0

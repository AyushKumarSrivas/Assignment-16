Multi-Dimensional Array in C Language

1. Write a program to calculate the sum of two matrices each of order 3x3.
2. Write a program to calculate the product of two matrices each of order 3x3.
3. Write a program in C to find the transpose of a given matrix.
4. Write a program in C to find the sum of right diagonals of a matrix.
5. Write a program in C to find the sum of left diagonals of a matrix.
6. Write a program in C to find the sum of rows and columns of a Matrix.
7. Write a program in C to print or display the lower triangular of a given matrix.
8. Write a program in C to print or display an upper triangular matrix.
9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
10. Write a program in C to find the row with maximum number of 1s.

Solution:-

1. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void sumMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];

    printf("Enter the elements of the first matrix (3x3):\n");
    inputMatrix(mat1);

    printf("Enter the elements of the second matrix (3x3):\n");
    inputMatrix(mat2);

    sumMatrices(mat1, mat2, result);

    printf("The sum of the matrices is:\n");
    printMatrix(result);

    return 0;
}

2. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];

    printf("Enter the elements of the first matrix (3x3):\n");
    inputMatrix(mat1);

    printf("Enter the elements of the second matrix (3x3):\n");
    inputMatrix(mat2);

    multiplyMatrices(mat1, mat2, result);

    printf("The product of the matrices is:\n");
    printMatrix(result);

    return 0;
}

3. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int mat[3][3], int transposed[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[3][3], transposed[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    transposeMatrix(mat, transposed);

    printf("The transpose of the matrix is:\n");
    printMatrix(transposed);

    return 0;
}

4. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int sumRightDiagonal(int mat[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += mat[i][i];
    }
    return sum;
}

int main() {
    int mat[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    printf("The sum of the right diagonal is: %d\n", sumRightDiagonal(mat));

    return 0;
}

5. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int sumLeftDiagonal(int mat[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += mat[i][3 - 1 - i];
    }
    return sum;
}

int main() {
    int mat[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    printf("The sum of the left diagonal is: %d\n", sumLeftDiagonal(mat));

    return 0;
}

6. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void sumRowsAndColumns(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
        printf("Sum of column %d: %d\n", i + 1, colSum);
    }
}

int main() {
    int mat[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    sumRowsAndColumns(mat);

    return 0;
}

7. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printLowerTriangular(int mat[3][3]) {
    printf("Lower triangular matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    printLowerTriangular(mat);

    return 0;
}

8. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printUpperTriangular(int mat[3][3]) {
    printf("Upper triangular matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    printUpperTriangular(mat);

    return 0;
}

9. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int isSparseMatrix(int mat[3][3]) {
    int zeroCount = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    return (zeroCount > (3 * 3) / 2);
}

int main() {
    int mat[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    if (isSparseMatrix(mat)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

10. #include <stdio.h>

void inputMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

int rowWithMaxOnes(int mat[3][3]) {
    int maxRow = 0, maxCount = 0;
    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }
    return maxRow;
}

int main() {
    int mat[3][3];

    printf("Enter the elements of the matrix (3x3):\n");
    inputMatrix(mat);

    printf("The row with the maximum number of 1s is: %d\n", rowWithMaxOnes(mat) + 1);

    return 0;
}

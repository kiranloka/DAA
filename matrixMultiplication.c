#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int firstMatrix[MAX_SIZE][MAX_SIZE], int secondMatrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowFirst, int rowSecond, int columnFirst, int columnSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter the rows and columns of the first Matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter the rows and columns of second Matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    if (columnFirst != rowSecond) {
        printf("Matrix multiplication is not possible!\n ");
        return 1;
    }

    int firstMatrix[MAX_SIZE][MAX_SIZE], secondMatrix[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements in first matrix: ");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            printf("Enter elements a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter the elements in second Matrix: ");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            printf("Enter elements b%d%d: ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, rowSecond, columnFirst, columnSecond);

    printf("\nResultant Matrix: \n");
    displayMatrix(result, rowFirst, columnSecond);

    return 0;
}

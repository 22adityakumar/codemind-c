#include <stdio.h>

void calculateRowSums(int matrix[][100], int rows, int columns) {
    int i, j, rowSum;
    for (i = 0; i < rows; i++) {
        rowSum = 0;
    for (j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        printf("%d ", rowSum);
    }
}

int main() {
    int matrix[100][100];
    int rows, columns;
    int i, j;
    scanf("%d %d", &rows, &columns);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    calculateRowSums(matrix, rows, columns);

    return 0;
}

#include <stdio.h>

int main() {
    int rows, cols, sum =0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n--- Boundary Elements ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d\t", matrix[i][j]);
                sum += matrix[i][j];
            } else {
                printf("\t"); 
            }
        }
        printf("\n");
}
    printf("\nTotal Sum of Boundary Elements: %d\n", sum);

    return 0;
}

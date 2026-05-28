#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int sumRow, sumCol, sumDiag1 = 0, sumDiag2 = 0;
    int magicNum = 0;
    int isMagic = 1; 

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (j = 0; j < 3; j++) {
        magicNum += matrix[0][j];
    }

    // 2. Check Rows and Columns
    for (i = 0; i < 3; i++) {
        sumRow = 0;
        sumCol = 0;
        for (j = 0; j < 3; j++) {
            sumRow += matrix[i][j];
            sumCol += matrix[j][i]; 
        }
        if (sumRow != magicNum || sumCol != magicNum) {
            isMagic = 0;
            break;
        }
    }

    // 3. Check Diagonals (only if it's still looking like a magic square)
    if (isMagic) {
        for (i = 0; i < 3; i++) {
            sumDiag1 += matrix[i][i];          
            sumDiag2 += matrix[i][3 - 1 - i];  
        }
        if (sumDiag1 != magicNum || sumDiag2 != magicNum) {
            isMagic = 0;
        }
    }

    // Output Result
    printf("\nTarget Sum: %d\n", magicNum);
    if (isMagic) {
        printf("Status: This is a Magic Square!\n");
    } else {
        printf("Status: Not a Magic Square.\n");
    }

    return 0;
}

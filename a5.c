#include <stdio.h>

int main() {
    int r, c, i, j;

  
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], sum[r][c];

  
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

   
    printf("\nSum of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    int found = 0;
    for(i = 0; i < r; i++) {
        int min = A[i][0], col = 0;

        for(j = 1; j < c; j++) {
            if(A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }

        int isSaddle = 1;
        for(j = 0; j < r; j++) {
            if(A[j][col] > min) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("\nSaddle Point: %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo Saddle Point found\n");

    // Step 6: Inverse (only 2x2)
    if(r == 2 && c == 2) {
        int a = A[0][0], b = A[0][1];
        int d = A[1][0], e = A[1][1];

        int det = a*e - b*d;

        if(det == 0) {
            printf("\nNo inverse possible\n");
        } else {
            printf("\nInverse of Matrix A:\n");
            printf("%.2f %.2f\n", (float)e/det, (float)(-b)/det);
            printf("%.2f %.2f\n", (float)(-d)/det, (float)a/det);
        }
    }

    // Step 7: Magic Square
    if(r == c) {
        int magic = 1, sum1 = 0;

        for(j = 0; j < c; j++)
            sum1 += A[0][j];

        // Check rows
        for(i = 1; i < r; i++) {
            int rowSum = 0;
            for(j = 0; j < c; j++)
                rowSum += A[i][j];
            if(rowSum != sum1)
                magic = 0;
        }

        // Check columns
        for(j = 0; j < c; j++) {
            int colSum = 0;
            for(i = 0; i < r; i++)
                colSum += A[i][j];
            if(colSum != sum1)
                magic = 0;
        }

        // Check diagonals
        int diag1 = 0, diag2 = 0;
        for(i = 0; i < r; i++) {
            diag1 += A[i][i];
            diag2 += A[i][r-i-1];
        }

        if(diag1 != sum1 || diag2 != sum1)
            magic = 0;

        if(magic)
            printf("\nMatrix is a Magic Square\n");
        else
            printf("\nMatrix is NOT a Magic Square\n");
    }

    // Step 8 & 9
    printf("\nProgram Ended\n");

    return 0;
}

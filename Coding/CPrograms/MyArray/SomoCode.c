#include <stdio.h>
 
int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int A[m][n], B[m][n], C[m][n];
    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Row %d, Column %d: ",(i+1),(j+1));
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Row %d, Column %d: ",(i+1),(j+1));
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSum of Matrices:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

#define ROWS 3

#define COLUMNS 4

void input(int a[][COLUMNS], const char *msg){
    int i, j;
    printf("%s", msg);
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLUMNS; j++){
            printf("Enter values in array [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void printArray(int a[][COLUMNS], const char *msg){
    int i, j;
    printf("%s", msg);
    for(i = 0; i < ROWS; i++, printf("\n")){
        for(j = 0; j < COLUMNS; j++){
            printf("\t%d", a[i][j]);
        }
    }
    printf("\nDone");
}
 
void sumArray(int a[][COLUMNS], int b[][COLUMNS]){
    int i=0,j=0,c[ROWS][COLUMNS];
    for(i=0;i<ROWS;i++){
        for(j=0;j < COLUMNS;j++){
            int sum=a[i][j]+b[i][j];
            c[i][j]=sum;
        }
    }
    printArray(c,"\nSum array is:\n");
}

int main(int argc, char const *argv[])
{
    int arr1[ROWS][COLUMNS], arr2[ROWS][COLUMNS];
    input(arr1, "\nInput values in arr1[][]:\n");
    printArray(arr1, "\narr1[][]:\n");
    input(arr2, "\nInput values in arr2[][]:\n");
    printArray(arr2, "\narr[][]:\n");
    sumArray(arr1, arr2);
    return 0;
}
 
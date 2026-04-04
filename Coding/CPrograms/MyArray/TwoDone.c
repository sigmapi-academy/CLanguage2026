#include<stdio.h>

#define ROWS 3
#define COLUMNS 4


const int M = 3;
const int N = 5;

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
int main(int argc, char const *argv[])
{
    int arr[ROWS][COLUMNS], i, j;
    input(arr, "\nInput values in arr[][]:\n");
    printArray(arr, "\narr[][]:\n");
    return 0;
}

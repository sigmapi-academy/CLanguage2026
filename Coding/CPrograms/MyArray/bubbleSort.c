#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printArray(int arr[], char msg[]){
    int i;
    printf("\n%s\n[", msg);
    for(i = 0; i < SIZE - 1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[i]); //last element
}

void bubbleSort(int A[]){
    int i, j, t;
    for ( i = 0; i < SIZE - 1 ; i++)
    {
        for ( j = 0; j < SIZE - 1 - i; j++)
        {
            if(A[j] > A[j+1])
            {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int A[SIZE], i;
    srand(time(NULL)); // Seed with current time
    for(i = 0; i < SIZE; i++){
        A[i] = rand() %101 ;
    }
    printArray(A, "Before sorting A[]:");
    bubbleSort(A);
    printArray(A, "After sorting A[]:");

    return 0;
}

#include<stdio.h>

# define SIZE 10

void inputArray(int arr[]){
    int i;
    printf("\nEnter %d values in array\n", SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Enter value in [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], char msg[]){
    int i;
    printf("\n%s\n[", msg);
    for(i = 0; i < SIZE - 1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[i]); //last element
}

int secondLargest(int a[]){
    //write your code below
    return 0;
}

int main(int argc, char const *argv[])
{
    int a[10], sl;
    char c[] = "a[]:";
    inputArray(a);
    printArray(a, c);
    sl = secondLargest(a); 
    printf("\nSecond largest: %d", sl);
    return 0;
}

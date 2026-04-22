#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[] = {10, 20, 30, 40, 50};
    int *p = A; //points to the first element
    int i;
    for(i = 0; i < 5; i++){
        printf("Value of A[%d] : %d, Address of A[%d]: %u\n", i, *(p), i, p);
        p++;
    }
    p--; //get back to the last location
    printf("\nDecrementing the pointer:\n");
    for(i = 0; i < 5; i++){
        printf("Value of A[%d] : %d, Address of A[%d]: %u\n", i, *(p), i, p);
        p--;
    }
    return 0;
}

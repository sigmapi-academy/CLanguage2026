#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[] = {10, 20, 30, 40, 50};
    int *p = A; //points to the first element
    int i;
    for(i = 0; i < 5; i++){
        printf("Value of A[%d] : %d, Address of A[%d]: %u\n", i, *(p+i), i, (p + i));
    }
    return 0;
}

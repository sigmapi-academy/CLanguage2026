#include<stdio.h>

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}
int main(int argc, char const *argv[])
{
    int a = 5, b = 10;
    printf("Values before swapping a = %d, b = %d\n", a,b);
    swap(&a, &b);
    printf("Values after swapping a = %d, b = %d\n", a,b);
    return 0;
}

#include<stdio.h>

int multiply(int, int); //prototype

int main(int argc, char const *argv[])
{
    int result = multiply(4, 7);
    printf("\nProduct = %d", result);

    int m, n;
    printf("\nEnter the value of m: ");
    scanf("%d", &m);
    
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    result = multiply(m, n);
    printf("\nProduct = %d", result);
    printf("\nProduct = %d", multiply(9,17));
    return 0;
}

int multiply(int x, int y){
    return x * y;
}

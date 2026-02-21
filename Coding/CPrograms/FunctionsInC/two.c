#include<stdio.h>

void printSquare(int n){
    printf("\nSquare = %d", (n*n));
}

int main(int argc, char const *argv[])
{
    int l;
    printf("\nEnter the int value: ");
    scanf("%d", &l);
    printSquare(l);
    printSquare(5);
    return 0;
}

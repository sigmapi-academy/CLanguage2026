#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p;
    p = &a; // Stores address of a in pointer p
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value stored in p (address of a) = %p\n", p);
    printf("Value at address stored in p = %d\n", *p);
    printf("Address of pointer p = %p\n", &p);
    return 0;
}

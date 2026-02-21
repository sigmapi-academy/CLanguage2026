#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z, max, min;
    printf("Input three int values: ");
    scanf("%d%d%d", &x, &y, &z);
    max = (x > y && x > z)? x : (y > z)? y : z;
    min = (x < y && x < z)? x : (y < z)? y : z;
    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d", min);   

    printf("\nsize of int: %d bytes", sizeof(x));
    return 0;
}

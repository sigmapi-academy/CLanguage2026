#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5, y = 6, p = 7, q = 8, r = 9  ;
    int z = x & y;
    printf("z = %d", z);
    z = x | y;
    printf("\nz = %d", z);
    z = ~p; //result is going to be big value like 4294967291
    printf("\n z = %d", z);
    z = ~q; //result is going to be big value like 4294967291
    printf("\n z = %d", z);
    z = ~r; //result is going to be big value like 4294967291
    printf("\n z = %d", z);
    z = x ^ y; //XOR operator, output is 1 when number of 1's in a row is odd.
    printf("\n z = %d", z);

    z = ~0;
    printf("\n z = %d", z);
    return 0;
}

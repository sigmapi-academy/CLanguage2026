#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5, y = 2;
    int z = ++x + --y;
    printf("z = %d", z);

    z = x++ + y++;
    printf("\nz = %d", z);
    return 0;
}

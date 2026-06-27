#include<stdio.h>
#include"four.c"

extern int number;

int main(int argc, char const *argv[])
{
    printf("\nnumber = %d\n", number);
    return 0;
}

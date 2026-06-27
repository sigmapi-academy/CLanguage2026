#include <stdio.h>

void counter()
{

    // static int count = 0; //execute only once for the first call only.
    int count = 0;
    count++;
    printf("%d\n", count);
}

int main(int argc, char const *argv[])
{
    counter();
    counter();
    counter();
    counter();
    return 0;
}

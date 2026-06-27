#include<stdio.h>

void f1(){
    int x = 10;
    printf("\nx = %d\n", x);
}
// Once f1() finished 'x' is destroyed. 
int main(int argc, char const *argv[])
{
    f1();
    return 0;
}

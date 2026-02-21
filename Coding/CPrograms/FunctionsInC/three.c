#include<stdio.h>

int getNumber(){
    int n;
    printf("\nEnter number: ");
    scanf("%d", &n);
    return n;
}

int main(int argc, char const *argv[])
{
    int value = getNumber();
    printf("You entered %d", value);
    return 0;
}

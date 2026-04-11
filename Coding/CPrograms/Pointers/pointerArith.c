#include<stdio.h>

#define SIZE 3

int main(int argc, char const *argv[])
{
    int ar[] = {1, 2, 3};

    // int *p = ar;
    // printf("%d\n", *p); //1
    // p++; //pointer will be updated to next address 
    // printf("%d\n", *p); //2
    // p++;
    // printf("%d\n", *p); //3
    // p--;
    // printf("%d\n", *p); //2
    int i;
    for(i = 0; i < SIZE; i++){
        printf("%d\n",*(ar + i));
    }
    
    return 0;
}

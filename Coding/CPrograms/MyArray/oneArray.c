#include<stdio.h>

#define asize 5

int main(int argc, char const *argv[])
{
    int num[asize], i;
    printf("Enter %d numbers:\n",asize);
    for(i = 0; i < asize; i++){
        scanf("%d", &num[i]);
    }

    printf("\nArray elements are: [");
    for(i = 0; i < asize - 1; i++){
        printf("%d, ",num[i]);
    }
    printf("%d]\n",num[i]);

    printf("\nMemory address of each element: [");
    for(i = 0; i < asize - 1; i++){
        printf("%u, ",&num[i]);
    }
    printf("%u]\n",&num[i]);

    printf("\nBase address: %u",num);
    return 0;
}

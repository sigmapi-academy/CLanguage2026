#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n, i, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    //ptr = (int *) malloc(sizeof(int)*n);
    ptr = (int *) calloc(n, sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated!");
        return -1;
    }

    //Memory allocated assign values to it
    for(i = 0; i < n ; i++){
        ptr[i] = (i+1) * 10 ;
    }

    //printing content of array
    printf("content of ptr[]:\n");
    for(i = 0; i < n ; i++){
        printf("%d\n", ptr[i]);
    }
    
    free(ptr); //releases the memory

    return 0;
}

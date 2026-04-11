#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *m, *c;

    m = (int *)malloc(5 * sizeof(int));
    c = (int *)calloc(5, sizeof(int));

    printf("malloc values: \n");
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n", m[i]); //garbage
    }

    
    printf("calloc values: \n");
    for(i = 0; i < 5; i++){
        printf("%d\n", c[i]); //0
    }

    free(m);
    free(c);
    
    return 0;
}

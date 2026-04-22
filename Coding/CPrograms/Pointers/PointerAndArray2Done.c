# include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("A[%d][%d]: %d, Address A[%d][%d]: %u\n", i, j, *(*(A+i)+j), i, j, (*(A+i)+j));
        }
    }
    return 0;
}

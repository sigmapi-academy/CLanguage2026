# include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int i, j;
    int *p = &A[0][0]; // Flat pointer(linear access)
    for(i = 0; i < 6; i++){
            printf("%d, Address: %u\n", *(p+i), (p+i));
    }
    return 0;
}

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n = 4, i, j;
    //upper triangle
    for(i = 0; i < n; i++){
        //loop for printing spaces
        for(j = 0; j < n - i; j++){
            printf("  ");
        }
        //loop for printing astrisks
        for(j = 1; j <= i*2+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    //lower triangle
    for(i = 1; i < n; i++){
        //loop for space
        for(j = 0; j <= i; j++){
            printf("  ");
        }
        //loop for asterisk
        for(j = 1; j <= (n-i-1)*2 + 1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

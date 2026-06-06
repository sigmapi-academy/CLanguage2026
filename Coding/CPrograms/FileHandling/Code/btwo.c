#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int n;
    fp = fopen("../Files/num.dat", "rb");
    fread(&n, sizeof(n), 1, fp);
    printf("Number = %d", n);
    fclose(fp);
    return 0;
}

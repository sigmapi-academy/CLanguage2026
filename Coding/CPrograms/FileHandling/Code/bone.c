#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    int n = 100;
    fp = fopen("../Files/num.dat", "wb");
    fwrite(&n, sizeof(n), 1, fp);
    fclose(fp);
    return 0;
}

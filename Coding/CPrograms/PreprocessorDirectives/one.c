#include<stdio.h>

#define PI 3.1428
#define and &&
#define or ||
#define not !
#define not_equal !=
#define True 1
#define False 0


int main(int argc, char const *argv[])
{
    float r = 6.25, area;
    area = PI * r * r;
    printf("Area of circle = %f\n", area);
    return 0;
}

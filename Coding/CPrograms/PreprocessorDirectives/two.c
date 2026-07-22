#include<stdio.h>

#define PI 3.1428
#define AND &&
#define OR ||
#define NOT !
#define not_equal !=
#define True 1
#define False 0
#define AREA_OF_CIRCLE(r) (PI * r * r)
#define ISDIGIT(y) (y >= '0' AND y <= '9')
#define ISCAPITAL(ch) (ch >= 'A' AND ch <= 'Z')
#define ISSMALL(ch) (ch >= 'a' AND ch <= 'z')
#define HLINE(start, end) \
    do{\
        int i = (start);\
        for(; i < end; i++)\
            printf("%c", 196);\
    }while(0);




int main(int argc, char const *argv[])
{
    float r = 6.25, area, r1 = 3.45;
    area = AREA_OF_CIRCLE(r);
    printf("\nArea of circle = %f\n", area);
    HLINE(1, 30);
    area = AREA_OF_CIRCLE(r1);
    printf("\nArea of circle = %f\n", area);
    HLINE(1,30);
    char ch;
    printf("\nEnter any character: ");
    scanf("%c", &ch);
    HLINE(1,30);
    if(ISDIGIT(ch)){
        printf("\nThe given character is digit.\n");
    }
    else if(ISCAPITAL(ch)){
        printf("\nThe given charcter is Capital letter.\n");
    }
    else if(ISSMALL(ch)){
        printf("\nThe given charcter is small letter.\n");
    }
    else{
        printf("\nThe given character is something else.\n");
    }
    HLINE(1,30);
    return 0;
}

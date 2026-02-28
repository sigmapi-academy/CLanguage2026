#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define asize 50
int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Seed with current time
    float marks[asize];
    int roll_num[asize], i;
    int max_marks_index, min_marks_index;
    for(i = 0; i < asize; i++){
        marks[i] = rand() %101 ;
        roll_num[i] = i+101;
    }

    printf("\nRoll number\tMarks\n");
    for(i = 0; i < asize ; i++){
        printf("%d\t\t%.0f\n",roll_num[i],marks[i]);
    }
    return 0;
}

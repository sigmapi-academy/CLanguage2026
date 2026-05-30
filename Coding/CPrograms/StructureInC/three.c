#include<stdio.h>

struct Student{
    int rollNum;
    char name[50];
    float marks;
};

int main(int argc, char const *argv[])
{
    struct Student s1 = {1, "Shiv\n", 88.88};
    
    //display the information
    printf("\nRoll number: %d", s1.rollNum);
    printf("\nName: %s", s1.name);
    printf("Marks: %.2f", s1.marks);
    return 0;
}

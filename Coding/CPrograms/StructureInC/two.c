#include<stdio.h>
#include"one.C"
#define SIZE 5

int main(int argc, char const *argv[])
{
    struct Student stu[SIZE];
    int i;
    printf("Enter the details of %d students\n", SIZE);
    for(i = 0; i < SIZE; i++){
        printf("Enter the roll number: ");
        scanf("%d", &stu[i].rollNum);
        fflush(stdin);
        printf("Enter student name: ");
        fgets(stu[i].name, 50, stdin);
        printf("Enter marks: ");
        scanf("%f", &stu[i].marks );
    }

    printf("\nStudents details:\n");
    for(i = 0; i < SIZE; i++){
        printf("\nDetails of student: %d\n",(i+1));
        printf("Roll number: %d\n", stu[i].rollNum);
        printf("Name: %s", stu[i].name);
        printf("Marks: %.2f", stu[i].marks);
    }
    return 0;
}


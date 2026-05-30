#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

typedef struct
{
    int rollNum;
    char name[50];
    float marks;
    struct Date dob;
}  Student;

void display(Student *st){
    // display the information
    printf("\nRoll number: %d", st->rollNum);
    printf("\nName: %s", st->name);
    printf("Marks: %.2f", st->marks);
    printf("\nDOB: %d/%d/%d", st->dob.day, st->dob.month, st->dob.year);
}

Student createStudent(){
    Student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.rollNum);
    fflush(stdin);
    printf("Enter student name: ");
    fgets(s1.name, 50, stdin);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d%d%d", &s1.dob.day, &s1.dob.month, &s1.dob.year);
    
    return s1;
}
int main(int argc, char const *argv[])
{
    Student stu;
    stu = createStudent();
    Student *ptr;
    ptr = &stu;
    display(ptr);
    printf("\nSize of structure in bytes: %lu", sizeof(stu));
    return 0;
}

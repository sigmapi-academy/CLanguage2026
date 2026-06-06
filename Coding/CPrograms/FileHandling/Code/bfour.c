#include<stdio.h>
#include<string.h>

typedef struct Student
{
    /* data */
    int roll;
    char name[30];
    float marks;
}Stud;

int main(int argc, char const *argv[])
{
    FILE *fp;
    char path[100] = "../Files/";
    char fileName[100];
    printf("Enter file name: ");
    scanf("%s", fileName);
    strcat(path, fileName);
    
    fp = fopen(path,"rb");
    if(fp == NULL){
        printf("\nFile not created!\n");
        return 1;
    }
    Stud s1 ;
    while(fread(&s1, sizeof(s1), 1, fp)){
        printf("Roll number = %d\n", s1.roll);
        printf("Name = %s\n", s1.name);
        printf("marks = %.2f\n", s1.marks);
    }
    fclose(fp);
    
    return 0;
}

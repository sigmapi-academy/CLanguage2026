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
    
    fp = fopen(path,"ab");
    if(fp == NULL){
        printf("\nFile not created!\n");
        return 1;
    }
    // Stud s1 = {101, "Soumodip", 89.6};
    Stud s1 = {102, "Saptashwa", 99.6};
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);
    printf("Record stored successfully.");
    return 0;
}

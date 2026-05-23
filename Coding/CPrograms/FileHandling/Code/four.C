#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 200

int main(int argc, char const *argv[])
{
    FILE *fp;
    char fileName[SIZE];
    printf("Enter file name: ");
    scanf("%s", fileName);
    char path[SIZE] = "../Files/";
    strcat(path, fileName);
    fp = fopen(path, "a");
    if(fp == NULL){
        perror("File not created!");
    }
    else{
        char name[SIZE], about[SIZE];
        int age;
        fflush(stdin);
        printf("Enter name: ");
        fgets(name, SIZE, stdin);
        printf("Enter age: ");
        scanf("%d", &age);
        fflush(stdin);
        printf("Enter few details of yourself: ");
        fgets(about, SIZE, stdin);
        fprintf(fp, "Name: %s", name);
        fprintf(fp, "Age: %d\n", age);
        //fputs(about, fp);
        fprintf(fp, "About: %s", about);
    }
    return 0;
}

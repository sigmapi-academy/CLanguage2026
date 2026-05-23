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
    fp = fopen(path, "r");
    if(fp == NULL){
        perror("File not found!");
    }
    else{
        char name[SIZE], about[SIZE], age[SIZE];
        //fscanf(fp, "%s %s %s", name, age, about);
        while(
            fgets(name, SIZE, fp)!=NULL &&
            fgets(age, SIZE, fp)!=NULL&&
            fgets(about, SIZE, fp)!=NULL){
            printf("%s",name);
            printf("%s",age);
            printf("%s",about);
        }
    }
    return 0;
}

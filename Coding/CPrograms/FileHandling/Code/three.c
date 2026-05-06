#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 200

int main(int argc, char const *argv[])
{
    char fileName[SIZE];
    printf("Enter file name: ");
    scanf("%s", fileName);
    char path[SIZE] = "../Files/";
    strcat(path, fileName);    
    FILE *fp = fopen(path, "a");
    if(fp == NULL){
        printf("File not created!");
        exit(1);
    }
    char name[SIZE];
    printf("Enter your name: ");
    scanf("%s", name);
    strcat(name, "\n");
    fputs(name, fp);

    return 0;
}

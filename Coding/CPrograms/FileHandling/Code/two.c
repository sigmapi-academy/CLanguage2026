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
    FILE *fp = fopen(path, "r");
    if(fp == NULL){
        printf("File not found on the specified path!");
        exit(1);
    }
    char name[SIZE];
    // fscanf(fp, "%s", name);
    printf("\nData from file:\n");
    while(fgets(name, SIZE, fp)!= NULL){
        printf("%s", name);
    }
    return 0;
}

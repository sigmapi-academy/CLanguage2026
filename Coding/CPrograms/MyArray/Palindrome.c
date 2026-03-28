#include<stdio.h>
#include<string.h>
#include<ctype.h>

int ispalindrome(char *str, int start, int end){
    if(start<end){
        if(str[start] != str[end]){
            return 0;
        }
        else{
            return ispalindrome(str, start + 1, end -1);
        }
    }
    else{
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    char word[100];
    printf("\nEnter any word: ");
    scanf("%s", word);
    if(ispalindrome(word, 0, strlen(word)-1)){
        printf("\nPalindrome word\n");
    }
    else{
        printf("\nNot a palindrome word\n ");
    }
    return 0;
}

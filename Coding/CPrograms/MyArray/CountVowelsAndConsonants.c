#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s[100], *p, *cptr;
    const char *vow = "aeiouAEIOU";
    char ch;
    int v=0, c=0;
    printf("Enter any sentence: ");
    if(fgets(s, sizeof(s), stdin)!= NULL){
        // Remove trailing newline if present
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }
    }

    cptr = s;
    while(*cptr){
        ch = *cptr;
        if(isalpha(ch)){
            p = strchr(vow, ch);
            if(p)
                v++;
            else
                c++;
        }
        cptr++;
    }
    printf("\nNumber of vowels: %d", v);
    printf("\nNumber of consonants: %d\n", c);
    return 0;
}

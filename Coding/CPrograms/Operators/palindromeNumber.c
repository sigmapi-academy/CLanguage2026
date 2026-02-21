#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, t, rev = 0, sed = 0;
    printf("Enter any int value: ");
    scanf("%d", &n);
    t = n;
    for(;t>0; rev = rev*10 + t % 10, t /= 10);
    if(rev == n){
        for(;rev > 0;  rev /= 10){
            if((rev % 10)%2 == 0){
                sed += rev % 10;
            }
        }
        printf("\n%d", sed);
    }
    else{
        printf("-1");
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, d, start = 1, isPrime = 0;
    printf("Enter nth value in positive intger: ");
    scanf("%d", &n);
    while(n > 0){
        isPrime = 1;
        start++;
        for(d = 2; d <= sqrt(start); d++){
            if(start % d == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime){
            n--;
        }
    }
    printf("\n%d", start);
    return 0;
}

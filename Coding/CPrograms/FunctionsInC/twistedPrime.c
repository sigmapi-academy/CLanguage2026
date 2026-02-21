#include<stdio.h>
#include<math.h>

//prototypes
int isPrime(int);
int reverse(int);

int main(int argc, char const *argv[])
{
    int i;
    for(i = 101; i < 998; i += 2){
        if(isPrime(i) && isPrime(reverse(i))){
            printf("%d ", i);
        }
    }
    return 0;
}

int isPrime(int x){
    if(x > 2 && x % 2 == 0 || x == 1){
        return 0;
    }
    int d;
    for(d = 3; d <= sqrt(x); d +=2){
        if(x % d == 0){
            return 0;
        }
    }
    return 1; //x is prime
}

int reverse(int n){
    int rev = 0;
    for(;n; rev = rev * 10 + n % 10, n/=10);
    return rev;
}

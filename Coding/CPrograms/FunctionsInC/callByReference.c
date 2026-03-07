#include<stdio.h>

void func(int *num){
    *num = *num + 10;
    printf("\n%d", *num);
}

int main(int argc, char const *argv[])
{
    int actual_num = 5;
    func(&actual_num);
    printf("\nactual_num = %d", actual_num);
    return 0;
}

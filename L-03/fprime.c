#include <stdio.h>
#include <stdlib.h>

void fprime(int num)
{
    if(num == 1)
    {
        printf("1");
        return;
    }
    if(num == 0)
        return;

    int i = 2;
    while(num > 1)
    {
        if(num % i == 0)
        {
            printf("%d",i);
            num = num / i;
        
            if(num > 1)
                printf("*");
        }
        else
            i++;
    }
}

int main(int Ac,char **Av)
{
    if(Ac == 2)
        fprime(atoi(Av[1]));
    printf("\n");
}

// 4 October
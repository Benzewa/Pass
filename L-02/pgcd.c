#include <stdio.h>
#include <stdlib.h>

void pgcd(int num1, int num2)
{
    int i = 1;
    int gcd = 0;
    int limit = 0;

    if(num1 > num2)
        limit = num2;
    else
        limit = num1;

    while(i <= limit)
    {
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
        i++;
    }
    printf("%d",gcd);
}

int main(int Ac, char **Av)
{
    if(Ac == 3)
        pgcd(atoi(Av[1]),atoi(Av[2]));
    printf("\n");
}

// 7 October
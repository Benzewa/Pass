#include <stdlib.h>
int is_power_of_2(unsigned int n)
{
    if(n == 0)
        return (0);
    if(n == 1)
        return (1);

    while(1)
    {
        if(n == 1)
            return(1);
        if(n % 2 != 0)
            return(0);
        n = n / 2;
    }
    return(0);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d",is_power_of_2(15));
// }

// 5 October

int is_power_of_2(unsigned int n)
{
    if (n == 1)
        return (1);
    if (n == 0)
        return (0);
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            if (n == 1)
                return (1);
        }
        else
            return (0);
    }
    return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int Ac, char **Av)
// {
//   if (Ac == 2)
//     printf("%d", is_power_of_2(atoi(Av[1])));
// }

// 8 October
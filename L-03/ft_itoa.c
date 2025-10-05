#include <stdlib.h>
char	*ft_itoa(int nbr)
{
    int len = 0;
    int temp = nbr;

    if(nbr <= 0)
        len++;
    while(temp)
    {
        temp = temp / 10;
        len++;
    }

    char *str = malloc(sizeof(char) * (len + 1));
    if(!str)
        return(NULL);

    if(nbr < 0)
        str[0] = '-';
    if(nbr == 0)
        str[0] = '0';
    str[len] = '\0';

    while(nbr)
    {
        int digit = nbr % 10;
        len--;
        if(nbr < 0)
            digit = digit * -1;
        str[len] = digit + '0';
        nbr = nbr / 10;
    }
    return(str);
}

// #include <stdio.h>

// int main()
// {
//     printf("%s\n",ft_itoa(123));
//     printf("%s\n",ft_itoa(0));
//     printf("%s\n",ft_itoa(1));
//     printf("%s\n",ft_itoa(-123));
// }

// 5 October
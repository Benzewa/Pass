#include <stdlib.h>

char *ft_itoa(int nbr)
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
    
    str[len] = '\0';
    
    if(nbr < 0)
        str[0] = '-';
    if(nbr == 0)
        str[0] = '0';
    
    while(nbr)
    {
        int digit = nbr % 10;
        if(nbr < 0)
            digit = digit * -1;
        len--;
        str[len] = digit + '0'; 
        nbr = nbr / 10;
    }
    return(str);
}

// #include <stdio.h>
// int main()
// {

//     printf("%s",ft_itoa(123));
// }

// 4 October
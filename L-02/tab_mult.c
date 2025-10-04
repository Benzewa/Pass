#include <unistd.h>

void ft_putnbr(int num)
{
    char digit;
    if(num > 9)
        ft_putnbr(num / 10);
    digit = num % 10 + '0';
    write(1,&digit,1);
}

void tab_mult(int num)
{
    int i = 1;
    while(i <= 9)
    {
        ft_putnbr(i);
        write(1," x ",3);
        ft_putnbr(num);
        write(1," = ",3);
        ft_putnbr(i * num);
        write(1,"\n",1);
        i++;
    }
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    if(str[i] && (str[i] == '-'))
    {
        sign = -1;
        i++;
    }
    if(str[i] && (str[i] == '+'))
        i++;
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 +(str[i] - '0');
        i++;
    }
    return(res * sign);
}

int main(int Ac, char **Av)
{
    if(Ac == 2)
        tab_mult(ft_atoi(Av[1]));
    else
        write(1,"\n",1);
}

// 4 October
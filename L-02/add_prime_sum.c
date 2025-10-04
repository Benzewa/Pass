#include <unistd.h>

void ft_putnbr(int num)
{
    int digit;
    if(num > 9)
        ft_putnbr(num / 10);
    digit = num % 10 + '0';
    write(1,&digit,1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(str[i] == ' ' || str[i] == '\t')
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
}

int is_prime(int num)
{
    int i = 1;
    int counter = 0;
    while(i <= num)
    {
        if(num % i == 0)
            counter++;
        i++;
    }
    if(counter == 2)
        return(1);
    return(0);
}

void add_prime_sum(int num)
{
    int i = 1;
    int sum = 0;
    while(i <= num)
    {
        if(is_prime(i))
            sum += i;
        i++;
    }
    ft_putnbr(sum);
}

int main(int Ac, char **Av)
{
    if(Ac == 2)
        add_prime_sum(ft_atoi(Av[1]));
    write(1,"\n",1);
}

// 4 October
#include <unistd.h>

void ft_putnbr(int num)
{
    char digit;
    if(num > 9)
        ft_putnbr(num / 10);
    digit = (num % 10) + '0';
    write(1,&digit,1);
}
int main(int Ac, char **Av)
{
    if(Ac == 1)
        write(1,"0",1);
    else
        ft_putnbr(Ac - 1);
    write(1,"\n",1);
}

// 4 October
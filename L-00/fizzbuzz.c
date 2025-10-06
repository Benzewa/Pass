#include <unistd.h>

void ft_putnbr(int num)
{
    int digit;
    if(num > 9)
        ft_putnbr(num / 10);
    digit = num % 10 + '0';
    write(1,&digit,1);
}

void fizzbuzz(void)
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 15 == 0)
            write(1,"fizzbuzz",8);
        else if(i % 5 == 0)
            write(1,"buzz",4);
        else if(i % 3 == 0)
            write(1,"fizz",4);
        else
            ft_putnbr(i);
        write(1,"\n",1);
        i++;
    }
}

int main(void)
{
    fizzbuzz();
}

// 6 October
#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    if (str[i] && (str[i] == '-'))
    {
        sign = -1;
        i++;
    }
    if (str[i] && (str[i] == '+'))
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

void print_hex(int num)
{
    char *hex = "0123456789abcdef";
    if (num > 15)
        print_hex(num / 16);
    write(1, &hex[num % 16], 1);
}

int main(int Ac, char **Av)
{
    if (Ac == 2)
        print_hex(ft_atoi(Av[1]));
    write(1, "\n", 1);
}

// 7 October

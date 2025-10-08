#include <unistd.h>

void rstr_capitalizer(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] && (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = str[i] + 32;
        i++;
    }
    i = 0;
    while (str[i])
    {
        if ((str[i]) && (str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] = str[i] - 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 1)
        write(1, "\n", 1);

    int i = 1;
    while (i < Ac)
    {
        rstr_capitalizer(Av[i]);
        write(1, "\n", 1);
        i++;
    }
}

// 5 October
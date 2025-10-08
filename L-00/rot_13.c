#include <unistd.h>

void rot_13(char *str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            str[i] = str[i] + 13;
        else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
            str[i] = str[i] - 13;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 2)
        rot_13(Av[1]);
    write(1, "\n", 1);
}

// 7 Ocotber
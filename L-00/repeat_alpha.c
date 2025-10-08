#include <unistd.h>

void repeat_alpha(char *str)
{
    int i = 0;
    int counter = 0;

    while (str[i])
    {
        if (str[i] && (str[i] >= 'a' && str[i] <= 'z'))
            counter = str[i] - 'a' + 1;
        else if (str[i] && (str[i] >= 'A' && str[i] <= 'Z'))
            counter = str[i] - 'A' + 1;
        else
            write(1, &str[i], 1);

        while (counter)
        {
            write(1, &str[i], 1);
            counter--;
        }
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 2)
        repeat_alpha(Av[1]);
    write(1, "\n", 1);
}

// 7 October
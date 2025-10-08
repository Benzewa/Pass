
#include <unistd.h>
int is_found(char *str, char c, int position)
{
    int i = 0;
    while (i < position)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_union(char *str1, char *str2)
{
    int i = 0;
    while (str1[i])
    {
        if (!is_found(str1, str1[i], i))
            write(1, &str1[i], 1);
        i++;
    }
    int len = i;
    i = 0;
    while (str2[i])
    {
        if (!is_found(str1, str2[i], len) && !is_found(str2, str2[i], i))
            write(1, &str2[i], 1);
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 3)
        ft_union(Av[1], Av[2]);
    write(1, "\n", 1);
}

// 4 October
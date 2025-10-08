
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
void inter(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i])
    {
        j = 0;
        while (str2[j])
        {
            if (str1[i] == str2[j])
            {
                if (!is_found(str1, str1[i], i))
                {
                    write(1, &str1[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 3)
        inter(Av[1], Av[2]);
    write(1, "\n", 1);
}

// 7 October
#include <stdlib.h>
size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j = 0;
    int Flag = 0;

    while (s[i])
    {
        j = 0;
        Flag = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                Flag = 1;
            j++;
        }
        if (Flag == 1)
            return (i);
        i++;
    }
    return (i);
}

// 7 October
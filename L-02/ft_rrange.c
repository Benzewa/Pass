#include <stdlib.h>
int *ft_rrange(int start, int end)
{
    int len = 0;
    if (start <= end)
        len = end - start;
    else
        len = start - end;

    len = len + 1;

    int *ptr = malloc(sizeof(int) * len);
    int i = 0;

    if (start <= end)
    {
        while (i < len)
        {
            ptr[i] = end;
            end = end - 1;
            i++;
        }
    }
    else
    {
        while (i < len)
        {
            ptr[i] = end;
            end = end + 1;
            i++;
        }
    }
    return (ptr);
}

// 7 October
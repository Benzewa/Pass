#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len = 0;
    if (start < end)
        len = end - start;
    else
        len = start - end;
    len++;

    int *ptr = malloc(sizeof(int) * (len));

    int i = 0;
    if (start <= end)
    {
        while (i < len)
        {
            ptr[i] = start;
            start = start + 1;
            i++;
        }
    }
    else
    {
        while (i < len)
        {
            ptr[i] = start;
            start = start - 1;
            i++;
        }
    }
    return (ptr);
}

// 7 October
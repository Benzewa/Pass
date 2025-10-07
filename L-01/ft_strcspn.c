#include <stdlib.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    int Flag = 0;

    while(s[i])
    {
        j = 0;
        Flag = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                Flag = 1;
            j++;
        }
        if(Flag == 1)
            return(i);
        i++;
    }
    return(i);
}

// 6 October
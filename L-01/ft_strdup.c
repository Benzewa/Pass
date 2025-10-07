#include <stdlib.h>
char *ft_strdup(char *src)
{
    int len = 0;
    while(src[len])
        len++;
    
    char *str = malloc(sizeof(char) * (len + 1));
    if(!str)
        return(NULL);
    
    int i = 0;
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[len] = '\0';
    return(str);
}

// 6 October
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int len = 0;
    while(src[len])
        len++;
    len--;
    char *strdup = malloc(sizeof(char) * (len + 1));
    if(!strdup)
        return(NULL);
    int i = 0;
    while(src[i])
    {
        strdup[i] = src[i];
        i++;
    }
    strdup[i] = '\0';
    return(strdup);
}

// #include <stdio.h>
// int main()
// {
//     char *strdup = ft_strdup("moutaz");
//     printf("%s",strdup);
// }

// 4 October
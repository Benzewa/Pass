#include <unistd.h>

void expand_str(char *str)
{
    int i = 0;
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    int start = i;

    while(str[i])
        i++;
    i--;
    
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i--;
    int end = i;
    
    while(start <= end)
    {
        if(str[start] && (str[start] != ' ' && str[start] != '\t'))
        {
            while(str[start] && (str[start] != ' ' && str[start] != '\t'))
            {
                write(1,&str[start],1);
                start++;
            }
            if(str[start] != '\0' && (start <= end))
                write(1,"   ",3);
        }
        else
            start++;
    }
}

int main(int Ac, char **Av)
{
    if(Ac == 2)
        expand_str(Av[1]);
    write(1,"\n",1);
}

// 4 October
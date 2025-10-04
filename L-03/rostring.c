#include <unistd.h>

void rostring(char *str)
{
    int i = 0;
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    int start = i;
    while(str[i] && (str[i] != ' ' && str[i] != '\t'))
        i++;
    int end = i - 1;
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    while(str[i])
    {
        if(str[i] && (str[i] != ' ' && str[i] != '\t'))
        {
            while(str[i] && (str[i] != ' ' && str[i] != '\t'))
            {
                write(1,&str[i],1);
                i++;
            }
            write(1," ",1);
        }
        else
            i++;
    }
    while(start <= end)
    {
        write(1,&str[start],1);
        start++;
    }
}

int main(int Ac, char **Av)
{
    if(Ac > 1)
        rostring(Av[1]);
    write(1,"\n",1);
}

//  4 October
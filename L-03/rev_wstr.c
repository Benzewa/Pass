#include <unistd.h>

void rev_wstr(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    i--;
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i--;

    while(i >= 0)
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i--;
        int end = i;
        while(str[i] && (str[i] != ' ' && str[i] != '\t'))
            i--;
        int start = i + 1;
        while(start <= end)
        {
            write(1,&str[start],1);
            start++;
        }
        if(i >= 0)
            write(1," ",1);
    }
}

int main(int Ac, char **Av)
{
    if(Ac > 1)
        rev_wstr(Av[1]);
    write(1,"\n",1);
}

// 4 October
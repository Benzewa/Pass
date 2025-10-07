#include <unistd.h>


void last_word(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    i--;
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
}

int main(int Ac, char **Av)
{
    if(Ac == 2)
        last_word(Av[1]);
    write(1,"\n",1);
}

// 7 October
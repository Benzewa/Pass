#include <unistd.h>

void ulstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
        else if(str[i] && (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = str[i] + 32;
        write(1,&str[i],1);
        i++;
    }
}

int main(int Ac,char **Av)
{
    if(Ac == 2)
        ulstr(Av[1]);
    write(1,"\n",1);
}
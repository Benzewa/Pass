#include <unistd.h>

void str_capitalizer(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    int Flag = 1;
    i = 0;
    while(str[i])
    {
        if(str[i] && (str[i] == ' ' || str[i] == '\t'))
        {
            Flag = 1;
        }
        if(Flag && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
            Flag = 0;
        }
        write(1,&str[i],1);
        i++;
    }

}

int main(int Ac,char **Av)
{
    if(Ac > 1)
    {
        int i = 1;
        while(i < Ac)
        {
            str_capitalizer(Av[i]);
            write(1,"\n",1);
            i++;
        }
    }
    else
        write(1,"\n",1);
}

// 4 October
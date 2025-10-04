#include <unistd.h>

void rotone(char *str)
{
    int i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
            str[i] = str[i] + 1;
        else if(str[i] == 'Z')
            str[i] = 'A';
        else if(str[i] == 'z')
            str[i] = 'a';
        write(1,&str[i],1);
        i++;
    }
}

int main(int Ac,char **Av)
{
    if(Ac == 2)
        rotone(Av[1]);
    write(1,"\n",1);
}

// 4 October


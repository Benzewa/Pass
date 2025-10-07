#include <unistd.h>

void search_and_replace(char *str, char search, char replace)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == search)
            str[i] = replace;
        write(1,&str[i],1);
        i++;
    }
}

int main(int Ac, char **Av)
{
    if(Ac == 4 && !Av[2][1] && !Av[3][1])
        search_and_replace(Av[1],Av[2][0],Av[3][0]);
    write(1,"\n",1);
}

// 7 October
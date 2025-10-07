int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    int d = 0;

    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    if(str[i] && (str[i] == '-'))
    {
        sign = -1;
        i++;
    }
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            d = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'z')
            d = str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            d = str[i] - 'A' + 10;
        else
            break;
        if(str_base <= d)
            break;
        res = res * str_base + d;
        i++; 
    }
    return(sign * res);
}


// 6 October
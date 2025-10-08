
int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    if (str[i] && (str[i] == '-'))
    {
        sign = -1;
        i++;
    }
    if (str[i] && (str[i] == '+'))
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

// 7 October
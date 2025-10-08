unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int temp;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
        temp = a;
    else
        temp = b;

    while (1)
    {
        if (temp % a == 0 && temp % b == 0)
            return (temp);
        temp++;
    }
    return (0);
}

// 8 October
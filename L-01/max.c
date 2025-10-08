
int max(int *tab, unsigned int len)
{
    unsigned int i = 1;
    int maximum = tab[0];
    while (i < len)
    {
        if (tab[i] > maximum)
            maximum = tab[i];
        i++;
    }
    return (maximum);
}
// 8 October
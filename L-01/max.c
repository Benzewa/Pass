int max(int* tab, unsigned int len)
{
    int maximum = tab[0];
    unsigned int i = 1;
    
    while(i < len)
    {
        if(tab[i] > maximum)
            maximum = tab[i];
        i++;
    }
    return(maximum);
}

// 7 October

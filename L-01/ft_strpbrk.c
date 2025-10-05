char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    int Flag = 0;

    while(s1[i])
    {
        j = 0;
        Flag = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                Flag = 1;
            j++;
        }
        if(Flag == 1)
            return((char*)&s1[i]);
        i++;
    }
    return(NULL);
}

// 3 Oct
// same as ft_strcspn
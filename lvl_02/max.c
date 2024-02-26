int             max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int rs = 0;
    if (len == 0)
        return 0;
    rs = tab[i];
    while (i < len)
    {
        if (tab[i] > rs)
            rs = tab[i];
        i++;
    }
    return rs;
}
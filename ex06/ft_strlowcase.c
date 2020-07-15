char    *ft_strlowcase(char *str)
{
    int x;
    x = 0;
    while (str[x] != '\0')
    {
        if (str[x] >= 'A' && str[x] <= 'z')
        str[x] += 32;
        x++;
    }
    return (str);
}

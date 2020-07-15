void ft_putstr(char *str)
{
    int count;
    count = 0;
    while (str[count] != '\0')
    {
        ft_putchar(str[count++]);
    }
}

char  *ft_strcpy(char *dest, char *src)
{
  int count;
  count = 0;
  while (src[count])
  {
    dest[count] = src[count];
    count++;
  }
  return (dest);
}

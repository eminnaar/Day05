void ft_putstr(char *str)
{
    int count;
    count = 0;
    while (str[count] != '\0')
    {
        ft_putchar(str[count]);
        count++;
    }
}
char  *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int count;
  count = 0;
  while (src[count] && (count < n))
  {
    dest[count] = src[count];
    count++;
  }
  while (count < n)
  {
    dest[count] = '\0';
    count++;
  }
  return (dest);
}
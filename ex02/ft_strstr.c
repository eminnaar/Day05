char  *ft_strstr(char *str, char *to_find)
{
  int x;
  x = 0;
  int y;
    while (str[x])
  {
    y = 0;
    while (str[x + y] == to_find[y])
    {
      y++;
    }
    if (!to_find[y])
      return (str + x);
    x++;
  }
  return (0);
}
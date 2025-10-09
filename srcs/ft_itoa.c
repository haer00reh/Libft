#include <stdlib.h>

int int_len(int n)
{
  int i;

  i = 0;
  if (n < 0)
  {
    n = -n;
    i++;
  }
  while (n > 0)
  {
    n /= 10;
    i++;
  }
  return (i);
}

char  *ft_itoa(int n)
{
  int   len;
  char  *str;

  len = int_len(n);
  str = (char *) malloc(sizeof(char) * (len + 1));
    if (!str)
      return (NULL);
  str[len] = '\0';
  if (n < 0)
  {
    str[0] = '-';
    n = -n;
  }
  len--;
  while (n != 0)
  {
    str[len] = (n % 10) + '0';
    n /= 10;
    len--; 
  }
  return (str);
}

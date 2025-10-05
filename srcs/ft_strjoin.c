#include <stdlib.h>

int ft_strlen(char const *s)
{
  int i;

  i = 0;
  while (s[i])
    i++;
  return (i);
}

char  *ft_strjoin(char const *s1, char const *s2)
{
  int   len;
  char  *str;
  int   i;

  len = ft_strlen(s1);
  len += ft_strlen(s2);
  str = (char *) malloc(sizeof(char) * (len + 1));
    if (!str)
      return (NULL);
  str[len] = '\0';
  i = 0;
  while (*s1)
  {
    str[i] = *s1;
    i++;
    s1++;
  }
  while (*s2)
  {
    str[i] = *s2;
    i++;
    s2++;
  }
  return (str);
}

#include <stdlib.h>

char  *ft_strsub(char const *s, unsigned int start, size_t len)
{
  size_t  size;
  char  *str;
  int   i;

  str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
      return (NULL);
  str[len] = '\0';
  i = 0;
  while (i < len)
  {
    str[i] = s[start];
    start++;
    i++;
  }
  return (str);
}

#include <stdlib.h>

int ft_isspace(char c)
{
  return (c == ' ' || c == '\t' || c == '\n');
}
char  *ft_strtrim(char const *s)
{
  char  *str;
  int   end;
  int   start;
  int   i;
  int   size;

  start = 0;
  while (s[start] && ft_isspace(s[start]))
    start++;
  end = 0;
  while (s[end])
    end++;
  end--;
  while (end > start && ft_isspace(s[end]))
    end--;
  size = end - start + 1;
  str = (char *) malloc(sizeof(char) * (size + 1));
    if (!str)
      return (NULL);
  str[size] = '\0';
  i = 0;
  while (start <= end)
    str[i++] = s[start++];
  return (str);
}

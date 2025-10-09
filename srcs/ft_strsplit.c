#include <stdio.h>
#include <stdlib.h>

int count_words(char const *s, char c)
{
  int i;
  int count;
  
  i = 0;
  count = 0;
  while (s[i])
  {
    while (s[i] && s[i] == c)
      i++;
    if (s[i])
     count++;
      while (s[i] && s[i] != c)
      i++;
  }
  return (count);
}
char  **ft_strsplit(char const *s, char c)
{
  int  words;
  char  **strset;
  int   i;
  int   len;
  int   j;
  int   k;

  words = count_words(s, c);
  strset = (char **) malloc(sizeof(char *) * (words + 1));
    if (!strset)
      return (NULL);
  i = 0;
  j = 0;
  while (i < words)
  {
    while (s[j] && s[j] == c)
      j++;
    len = 0;
    while (s[j + len] && s[j + len] != c)
      len++;
    strset[i] = (char *) malloc(sizeof(char) * (len + 1));
      if (!strset[i])
        return (NULL);
    k = 0;
    while (k < len)
    {
      strset[i][k] = s[j + k];
      k++;
    }
    strset[i][k] = '\0';
    j += len;
    i++;
  }
  strset[i] = NULL;
  return (strset);
}

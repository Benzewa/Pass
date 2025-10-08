
#include <unistd.h>
void wdmatch(char *str1, char *str2)
{
  int i = 0;
  int j = 0;

  while (str1[i] && str2[j])
  {
    if (str1[i] == str2[j])
      i++;
    j++;
  }

  if (str1[i] == '\0')
  {
    i = 0;
    while (str1[i])
    {
      write(1, &str1[i], 1);
      i++;
    }
  }
}

int main(int Ac, char **Av)
{
  if (Ac == 3)
    wdmatch(Av[1], Av[2]);
  write(1, "\n", 1);
}

// 5 October
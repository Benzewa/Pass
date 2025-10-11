#include "get_next_line.h"
char *get_next_line(int fd)
{
  if (fd < 0 || BUFFER_SIZE <= 0)
    return (NULL);

  char *line = malloc(70000);
  int byte = read(fd, line, 70000);

  if (byte == 0)
  {
    free(line);
    return (NULL);
  }
  line[byte] = 0;
  return (line);
}

// 11 October 2025
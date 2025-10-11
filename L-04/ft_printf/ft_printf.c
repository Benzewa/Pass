// INT_MIN = -2147483648

#include <unistd.h>
#include <stdarg.h>

void ft_putstr(char *str, int *d)
{
  if (!str)
    str = "(null)";
  while (*str)
  {
    write(1, str, 1);
    str++;
    (*d)++;
  }
}
void ft_putnbr(int num, int *d)
{
  if (num == -2147483648)
  {
    ft_putstr("-2147483648", d);
    return;
  }
  if (num < 0)
  {
    write(1, "-", 1);
    num = num * -1;
    (*d)++;
  }
  char c;
  if (num > 9)
    ft_putnbr(num / 10, d);
  c = (num % 10) + '0';
  write(1, &c, 1);
  (*d)++;
}
void ft_puthex(unsigned int num, int *d)
{
  char *hex = "0123456789abcdef";
  if (num > 15)
    ft_puthex(num / 16, d);
  write(1, &hex[num % 16], 1);
  (*d)++;
}

int ft_printf(const char *format, ...)
{
  int d = 0;
  va_list pa;
  va_start(pa, format);

  while (*format)
  {
    if (*format == '%' && *(format + 1))
    {
      format++;
      if (*format == 's')
        ft_putstr(va_arg(pa, char *), &d);
      else if (*format == 'd')
        ft_putnbr(va_arg(pa, int), &d);
      else if (*format == 'x')
        ft_puthex(va_arg(pa, unsigned int), &d);
      else
      {
        write(1, format, 1);
        d++;
      }
    }
    else
    {
      write(1, format, 1);
      d++;
    }
    format++;
  }
  va_end(pa);
  return (d);
}

// 11 October 2025
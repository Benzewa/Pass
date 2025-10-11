#include <unistd.h>
#include <stdarg.h>

void ft_putstr(char *str, int *d)
{
  if (!str)
    str = "(null)";
  while (*str)
  {
    write(1, str++, 1);
    (*d)++;
  }
}

void ft_putnbr(int n, int *d)
{
  char c;
  if (n == -2147483648)
  {
    ft_putstr("-2147483648", d);
    return;
  }
  if (n < 0)
  {
    write(1, "-", 1);
    (*d)++;
    n = -n;
  }
  if (n > 9)
    ft_putnbr(n / 10, d);
  c = (n % 10) + '0';
  write(1, &c, 1);
  (*d)++;
}

void ft_puthex(unsigned int n, int *d)
{
  char *hex = "0123456789abcdef";
  if (n >= 16)
    ft_puthex(n / 16, d);
  write(1, &hex[n % 16], 1);
  (*d)++;
}

int ft_printf(const char *format, ...)
{
  va_list ap;           // Variable ap
  int d = 0;            // Total chars printed
  va_start(ap, format); // Start ap
  while (*format)       // Loop format string
  {
    if (*format == '%' && *(format + 1)) // Specifier check
    {
      format++; // Skip '%'
      if (*format == 's')
        ft_putstr(va_arg(ap, char *), &d);
      else if (*format == 'd')
        ft_putnbr(va_arg(ap, int), &d);
      else if (*format == 'x')
        ft_puthex(va_arg(ap, unsigned int), &d);
      else // Unknown specifier
      {
        write(1, format, 1);
        d++;
      }
    }
    else // Normal char
    {
      write(1, format, 1);
      d++;
    }
    format++; // Next char
  }
  va_end(ap); // Clean up
  return (d); // Return total
}

// int main(void)
// {
//     ft_printf("Hello %s, %d, %x\n", "world", -42, 255);
//     ft_printf("%s\n", "toto");
//     ft_printf("Magic %s is %d\n", "number", 42);
//     ft_printf("Hexadecimal for %d is %x\n", 42, 42);
//     return (0);
// }

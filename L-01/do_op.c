#include <stdlib.h>
#include <stdio.h>

void do_op(int num1, char operator, int num2)
{
    if (operator == '+')
        printf("%d", num1 + num2);
    else if (operator == '-')
        printf("%d", num1 - num2);
    else if (operator == '*')
        printf("%d", num1 * num2);
    else if (operator == '/')
        printf("%d", num1 / num2);
    else if (operator == '%')
        printf("%d", num1 % num2);
}

int main(int Ac, char **Av)
{
    if (Ac == 4 && !Av[2][1])
        do_op(atoi(Av[1]), Av[2][0], atoi(Av[3]));
    printf("\n");
}

// 7 October
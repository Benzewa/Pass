unsigned int lcm(unsigned int a, unsigned int b)
{
    if(a == 0 || b == 0)
        return(0);
    unsigned int num = 0;
    if(a > b)
        num = a;
    else
        num = b;

    while(1)
    {
        if(num % a == 0 && num % b == 0)
        {
            return(num);
        }
        num++;
    }
    return(num);
}

// #include <stdio.h>
// int main(void)
// {
//     // Basic cases
//     printf("%u\n", lcm(4, 6));      // 12
//     printf("%u\n", lcm(3, 5));      // 15
//     printf("%u\n", lcm(21, 6));     // 42
    
//     // Edge cases
//     printf("%u\n", lcm(0, 5));      // 0
//     printf("%u\n", lcm(5, 0));      // 0
//     printf("%u\n", lcm(0, 0));      // 0
    
//     // Same numbers
//     printf("%u\n", lcm(7, 7));      // 7
    
//     // One is multiple of other
//     printf("%u\n", lcm(4, 12));     // 12
//     printf("%u\n", lcm(12, 4));     // 12
    
//     // Coprime numbers
//     printf("%u\n", lcm(7, 11));     // 77
    
//     // Powers of 2
//     printf("%u\n", lcm(8, 16));     // 16
    
//     // Large numbers
//     printf("%u\n", lcm(100, 150));  // 300
// }

// 6 october
unsigned int    lcm(unsigned int a, unsigned int b)
{
  if(a == 0 || b == 0)
      return(0);

  unsigned int num;
  if(a > b)
      num = a;
  else
      num = b;
  
  while(1)
  {
      if(num % a == 0 && num % b == 0)
          return(num);
      num++;
  }
  return(num);
}

//   #include <stdio.h>
//   int main()
//   {
//     printf("%d",lcm(23,100));
//   }
//   5 October
#include <stdio.h>

int FactorialGen(int number);
int Fib(int length);

int main()
{

  //int value = FactorialGen(5);
  int sequence = Fib(9);
  printf("Fib Sequence: %d\n", sequence);

  return 0;
}

int FactorialGen(int number)
{
  if(number < 1) return 1;
  return number * FactorialGen(number - 1);
}

int Fib(int length)
{
  if(length == 0 || length == 1) return length;
  return Fib(length - 1) + Fib(length - 2);
}

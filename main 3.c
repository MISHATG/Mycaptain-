/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int num1, num2;
  printf ("Enter two numbers: \n");
  scanf ("%d%d", &num1, &num2);
  printf ("Number before swapping is %d and %d \n", num1, num2);
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  printf ("Number after swapping is %d and %d \n ", num1, num2);
  return 0;
}

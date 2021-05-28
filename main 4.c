/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main ()
{
  int item1,item2,item3,item4,item5;
  printf("pick an item:\n1.pizza\n2.burger\n3.pasta\n4.french fries\n5.sandwich");
  int choice=0;
  scanf("%d",&choice);
  switch(choice)
  {
      case 1:
        printf("item:pizza \n price:239");
        break;
      case 2:
        printf("item:burger \n price:129");
        break;
      case 3:
        printf("item:pasta \n price:179");
        break;
      case 4:
        printf("item:french fries \n price:99");
        break;
      case 5:
        printf("item:sandwich \n price:149");
      default:printf("invalid choice"); 
      
      
  }
}

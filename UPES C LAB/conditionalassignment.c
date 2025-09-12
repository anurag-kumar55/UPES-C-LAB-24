#include<stdio.h>
int main ()
{
  int a=10;
  printf("initial value of a: %d\n",a);
  a+=5;
  printf("after a +=5 : %d\n",a);
  a=10;
  a-=5;
  printf("after a -=5 : %d\n",a);
  a=15;
  a*=2;
  printf("after a *=5 : %d\n",a);
  return 0;
  


}
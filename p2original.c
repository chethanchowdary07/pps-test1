#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:\n");
  scanf("%d",&a);
  return a;
}

int summ( int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}

void print(int z,int x,int y)
{
  printf("the sum is %d+%d=%d\n",x,z,y);
}

int main(int x,int y,int z)
{
  x=input();
  y=input();
  z=summ(x,y);
  print(x,y,z);
  return 0;
  
}
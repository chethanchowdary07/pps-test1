#include<stdio.h>
 
void input(int x,int y);
{
  printf("enter the two numbers:");
  scanf("%d %d",x,y);
}
void sum(int x,int y,int z);
{
 z=x+y;
}
void output(int x,int y,int z);
{
  printf("%d+%d=%d",x,y,z);
}
int main(int a,int b,int c);
{
  input(&a,&b);
  sum(a,b,&c);
  output(a,b,c);
  return 0;
}
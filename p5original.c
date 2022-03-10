#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter the number:");
  scanf("%d%d%d",a,b,c);
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c){
    return a;
  }
  else if(b>a&&a>c){
    return b;
  }
  else{
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  printf("the largets of %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
  int x,y,z,g;
  input(&x,&y,&z);
  g=cmp(x,y,z);
  output(x,y,z,g);
}



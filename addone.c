#include<stdio.h>
int get_input(int a)
{
     int a;
     printf("Enter a number: \n");
     scanf("%d",&a);
     return a;
}
int add_one(int a)
{
      int b;
      b=a+1
      return b;
}
void output(int a, int b)
{
}
int main(void)
{
    int a=get_input();
    int b=add_one(a);
}


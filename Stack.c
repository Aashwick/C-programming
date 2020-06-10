#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 10

     int a[max];
     int top=-1;
     int x;
     bool full()
     {
          if(top==max-1)
          return true;
          else
          return false;
     }
     bool empty()
     {
          if(top==-1)
          return true;
          else
          return false;
     }
   void push(int x)
{
     if(full())
     printf("Stack is full");
     else
     {
         top=top+1;
         a[top]=x;
     }
}
   void pop()
{
    if(empty())
    printf("Stack is empty");
    else
    {
        printf("%d",a[top]);
        top=top-1;
    }
}
   

void print()
{
     printf("The stack");
     for(int i=0;i<=top;i++)
     printf("%d ",a[i]);
     printf("\n");
}
main()
{
     push(30);
     push(69);
     push(231);
     pop();
     print();
}

#include <stdio.h>
#include<stdlib.h>
#define MAX 4
int a[MAX];
int top = -1;
void push(int data)
{
    if(top==MAX-1)
    {
        printf("Stack overflow\n");
        return;
    }
    
    top=top+1;
    a[top]=data;
}

int pop()
{
    int value;
    if(top<0)
    {
        printf("Stack underflow\n");
      
    }
    value=a[top];
    top=top-1;
    return value;
   
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    for(i=0;i<top;i++)
    printf("%d",a[i]);
}

void main()
{
    while(1)
   {
   int n,data;
   printf("Enter the operation:1.PUSH   2.POP   3.DISPLAY ");
   scanf("%d",&n);
   
       switch(n)
       {
           case 1: printf("enter the data ");
           scanf("%d",&data);
           push(data);
           break;
           case 2:data=pop();
           printf("%d\n",data);
           break;
           case 3:display();
           break;
           default:exit(0);
           
       }
   }
}

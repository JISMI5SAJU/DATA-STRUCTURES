#include<stdio.h>
int n,a[10],top=-1,item;
void push();
void pop();
void peek();
void display();
void main()
{
printf("Enter the no of elements");
scanf("%d",&n);
int ch;

while(ch!=5)
{
printf("1.push\n2.pop\n3.peek\n4.display\n");
printf("Enter the choice");
scanf("%d",&ch);
switch(ch)
{
 case 1:
     {
      push();
      break;
     }
 case 2:
     {
      pop();
      break;
      }
 case 3:
    {
    peek();
    break;
    }
 case 4:
    {
     display();
     break;
    }
 default:
   {
   printf("Invalid choice\n");
   }
 }
 }
 }
 void push()
 {
 if(top<n-1)
 {
 top=top+1;
 printf("Enter the item");
 scanf("%d",&a[top]);
 }
 else
 {
 printf("OVERFLOW");
 }
 }
 void pop()
 {
 if(top==-1)
 {
 printf("UNDERFLOW");
 }
 else
 {
 item=a[top];
 top=top-1;
 }
 }
 void peek()
 {
 printf("topmost element=%d",a[top]);
 }
 void display()
 {
  int i;
  printf("The elements in the stack are:");
  for(i=top;i>0;i++)
  {
  printf("%d\n",a[top]);
  }
 }
 
 
 
 
 
    
 
 
 
 
 

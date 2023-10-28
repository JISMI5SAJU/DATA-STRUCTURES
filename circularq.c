#include<stdio.h>
int front=-1,rear=-1,item,a[50],maxsize;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
    int choice;
    printf("Enter the size of the array\n");
    scanf("%d",&maxsize);
    while(choice!=5)
    {
      printf("Enter the choice\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n");
      scanf("%d",&choice);
      if (choice==1)
      {
        enqueue();
      }
      else if (choice==2)
      {
        dequeue();
      }
      else if (choice==3)
      {
        peek();
      }
      else if (choice==4)
      {
        display();
      }
     
    }
}
void enqueue()
{
if(front==-1&&rear==-1)
{
front=0;
rear=0;
printf("Enter item to insert");
scanf("%d",&item);
a[rear]=item;
}
else if(front==(rear+1) % maxsize)
{
printf("OVERFLOW");
}
else
{
rear=((rear+1)%maxsize);
printf("Enter item to insert");
scanf("%d",&item);
a[rear]=item;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("UNDERFLOW");
}
else if(front==rear)
{
item=a[front];
front=-1;
rear=-1;
}
else
{
item=a[front];
front=((front+1)%maxsize);
}
}
void peek()
{
if(front==-1&&rear==-1)
{
printf("UNDERFLOW");
}
else 
{
printf("The peek element is %d\n",a[front]);
}
}
void display()
{
int i;
if(front==-1&&rear==-1)
{
printf("UNDERFLOW");
}
printf("position element\n");
for(i=front;i!=rear;i=(i+1)%maxsize)
{
 printf(" %d    ",i);
 printf("%d\n",a[i]);
 }
 printf(" %d    ",i);
 printf("%d\n",a[i]);
 printf("\n");
 printf("Front: %d\n",front);
 printf("rear=: %d\n",rear);
}





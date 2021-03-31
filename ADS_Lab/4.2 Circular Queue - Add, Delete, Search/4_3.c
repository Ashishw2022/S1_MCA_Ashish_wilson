#include<stdio.h>
#define max 3
int q[10],front=0,rear=-1;
void main()
{
int ch;
void insert();
void delte();
void display();
void search();
printf("\n circular queue operations\n");
printf("1.insert\n2.delete\n3.display\n4.search\n5.exit\n");
while(1)
{
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:delte();
break;
case 3:display();
break;
case 4:search();
break;
case 5:exit(1);
break;
default:printf("\ninvalid option\n");
}
}
}
void insert()
{
int x;
if((front==0&&rear==max-1)||(front>0&&rear==front-1))
printf("queue is overflow\n");
else
{
printf("\nenter element to be inserted:");
scanf("%d", &x);
if(rear==max-1&&front>0)
{
rear=0;
q[rear]=x;
}
else
{
if((front==0&&rear==-1)||(rear!=front-1))
q[++rear]=x;
}
}
}
void delte()
{
int a;
if((front==0)&&(rear==-1))
{
printf("queue is underflow\n");
getch();
exit(1);
}
if(front==rear)
{
a=q[front];
rear=-1;
front=0;
}
else
if(front==max-1)
{
a=q[front];
front=0;
}
else a=q[front++];
printf("deleted element is:%d\n",a);
}
void search()
{
int i,ele;
printf("\n enter the element to search ");
scanf("%d",&ele);
for(i=front;i<=rear;i++)
{
if(ele==q[i])
{
printf("\n element found at %d position : %d",i+1,ele);
}
}
printf("\n element not found");
}
void display()
{
int i,j;
if(front==0&&rear==-1)
{
printf("no elements to display\n");
getch();
exit(1);
}
if(front>rear)
{
for(i=0;i<=rear;i++)
printf("\t%d",q[i]);
for(j=front;j<=max-1;j++)
printf("\t%d",q[j]);
}
else
{
for(i=front;i<=rear;i++)
{
printf("\t%d",q[i]);
}
}
printf("\n");
}
getch();

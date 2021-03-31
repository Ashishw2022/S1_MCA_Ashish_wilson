#include <stdio.h>
#include<conio.h>
#include<stdlib.h>c
void push();
void pop();
void search();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top;
void main()
{
 char ch;
 int op;
 clrscr();
 while(op!=5)
 {
  printf("\n 1.PUSH \n 2.POP \n 3.LINEAR SEARCH \n 4.DISPLAY \n 5.EXIT \n ");
  printf("Enter your choice:");
  scanf("%d",&op);
    switch(op)
    {
     case 1:push();break;
     case 2:pop();break;
     case 3:search();break;
     case 4:display();break;
     case 5:exit(0);break;
     default:printf("\nINVALID INPUT");
    };
 }
 getch();
}

void push()
{
 int val;
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL)
  {
   printf("\nStack is full");
  }
  else
  {
   printf("\nEnter the value");
   scanf("%d",&val);
   if(top==NULL)
    {
     top=newnode;
     newnode->data=val;
     newnode->next=NULL;
    }
   else
    {
     newnode->data=val;
     newnode->next=top;
     top=newnode;
    }
  printf("\n Value pushed");
  }
}

void pop()
{
  if(top==NULL)
   {
    printf("\nStack is empty");
   }
  else
   {
     struct node*temp;
     temp=top;
     top=temp->next;
     free(temp);
     printf("\nvalue deleted");
   }

}

void search()
{
int key,flag;
struct node*temp;
printf("\nEnter the element to search: ");
scanf("%d",&key);
temp=top;
 while(temp!=NULL)
  {
   if(temp->data==key)
    {
    flag=1;
    }
    temp=temp->next;
   }
   if(flag==1)
   {
    printf("element found %d",key);
   }
  else
  {
  printf("element not found");
  }
}

void display()
{
  if(top==NULL)
  {
  printf("\n Stack is empty");
  }
  else
  {
  struct node*temp;
  temp=top;
   while(temp->next!=NULL)
    {
      printf("%d->",temp->data);
      temp=temp->next;
    }
    printf("%d->NULL",temp->data);
  }
}







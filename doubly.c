#include<stdio.h>
#include<stdlib.h>
void insertb();
void inserte();
void insertm();
void delb();
void dele();
void delm();
void display();
struct node
{
int data;
struct node *next;
struct node *prev;
};
struct node *head=NULL;
struct node *ptr=NULL;
struct node *new=NULL;
struct node *temp=NULL;
void main()
{

int n,i,opt;
printf("ENTER THE NO OF ELEMENTS");
scanf("%d",&n);
for(i=0;i<n;i++)
{
new=(struct node *)malloc(sizeof(struct node));
printf("ENTER THE DATA TO BE INSERTED ");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
if(head==NULL)
{
head=new;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
new->prev=ptr;
ptr->next=new;
}
}
do
{
printf("\nENTER YOUR CHOICE:\n1. INSERT AT BEGINNING\n2. INSERT AT END\n3. INSERT AT ANY LOCATION\n4. DELETE AT THE BEGINNING\n5. DELETE AT THE END\n6. DELETE ANY NODE\n7. DISPLAY\n8. EXIT");
scanf("%d",&opt);
switch (opt)
{
case 1:insertb();
break;
case 2:inserte();
break;
case 3:insertm();
break;
case 4:delb();
break;
case 5:dele();
break;
case 6:delm();
break;
case 7:display();
break;
case 8:printf("EXIT");
break;
default:printf("INVALID CHOICE");
}
}
while(opt!=8);
}
void insertb()
{
new=(struct node *)malloc(sizeof(struct node));
printf("ENTER THE DATA TO BE INSERTED AT BEGINNING ");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
new->next=head;
head=new;
}
void inserte()
{
new=(struct node *)malloc(sizeof(struct node));
printf("\nENTER THE DATA TO BE INSERTED END ");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
if(head==NULL)
{
head=new;
}
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
new->prev=ptr;
ptr->next=new;
}
}
void insertm()
{
int key;
printf("ENTER THE KEY ");
scanf("%d",&key);
new=(struct node *)malloc(sizeof(struct node));
printf("\nENTER THE DATA TO BE INSERTED ");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
if(head==NULL)
{
head=new;
}
else
{
ptr=head;
while(ptr->next!=NULL && ptr->data!=key)
{
ptr=ptr->next;
}
}
if(ptr->next==NULL)
{
ptr->next=new;
new->next=ptr;
}
else
{
temp=ptr->next;
new->next=temp;
new->prev=ptr;
ptr->next=new;
temp->prev=new;
}
}
void display()
{
printf("LIST IS ");
ptr=head;
while(ptr!=NULL)
{
printf("%d->",ptr->data);
ptr=ptr->next;
}
}
void delb()
{
if(head->next!=NULL)
{
printf("\n %d IS DELETED ",head->data);
head=head->next;
}
}
void dele()
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
if(ptr->next==NULL)
{
temp=ptr->prev;
temp->next=NULL;
ptr->prev=NULL;
printf("\n %d IS DELETED ",ptr->data);
}
}
void delm()
{
int key;
printf("ENTER THE KEY TO BE DELETED ");
scanf("%d",&key);
if(head->data==key)
{
head=head->next;
}
temp=head;
ptr=head->next;
while(ptr!=NULL)
{
if(ptr->data==key)
{
temp->next=ptr->next;
temp->prev=ptr->prev;
free(ptr);
printf("\n %d IS DELETED ",key);
}
else
{
temp=ptr;
ptr=ptr->next;
}
}
}

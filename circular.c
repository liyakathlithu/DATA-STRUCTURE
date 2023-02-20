#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int a[4],size=3,item,f=-1,r=-1;
void main()
{
int opt;
do
{
printf("\nEnter your choice\n1.Insert\n2.Delete\n3.display\n4.Exit\n");
scanf("%d",&opt);
printf("The choice is %d \n",opt);
switch(opt)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid");
}
}while(opt!=4);
}

void insert()
{
if(f==(r+1) % size)
{
printf("Queue is full");
}
else
{
printf("Enter the item:");
scanf("%d",&item);

if(f==-1 && r==-1)
{
f=0,r=0;
a[r]=item;
}
else
{
r=(r+1)%size;
a[r]=item;
}
}
}

void delete()
{

if(f==-1)
{
printf("no element to be deleted");
}
else if(f==r && r==0)
{
printf("The element to be deleted is %d",a[f]);
f=r=-1;
}
else
{
printf("The element to be deleted is %d",a[f]);
f=(f+1)%size;
}
}
void display()
{
int temp;
temp=f;
if(temp==-1 && r==-1)
{
printf("No element");
}
else
{
printf("The elements are: ");
while(temp>-1)
{
printf("%d\t",a[temp]);
if(temp==r)
break;
temp=(temp+1)%size;
}
}
}

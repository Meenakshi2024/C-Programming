#include<stdio.h>
#define max 5
int a[max],data,top=-1;
void push();
void pop();
void display();
void search();
void main()
{
int n;
do
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Search\n5.Exit");
printf("\nEnter your choice:");
scanf("%d",&n);
switch(n)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:display();
	break;
case 4:search();
	break;
case 5:break;
default:printf("\nEnter a valid choice:");
}
}
while(n!=5);
return;
}
void push()
{
if(top==(max-1))
{
printf("\nStack Overflow");
}
else
{
printf("\nEnter the number:");
scanf("%d",&data);
top=top+1;
a[top]=data;
}
}
void pop()
{
if(top==1)
{
printf("\nStack is empty");
}
else
{
printf("\nDeleted data is %d",a[top]);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty");
}
else
{
for(i=top;i>=0;i--)
{
printf("\n%d",a[i]);
}
}
}
void search()
{
int i,s=0,k;
printf("\nEnter the value to search:");
scanf("%d",&data);
for(i=top;i>=0;i--)
{
if(a[i]==data)
{
s=1;
k=i;
break;
}
}
if(s==1)
printf("\n%d found at position %d",data,(k+1));
else
printf("\nItem not found");
}

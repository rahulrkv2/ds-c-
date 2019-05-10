#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
}*n,*current,*first;

int main()
{
int ele,y,ch,c,z=0;first=NULL;
while(z==0)
{

printf("1.insertion 2.deletion 3.display");
scanf("%d",&ch);
if (ch==1)
{
printf("1.at beggining 2.at end 3.after a node");
scanf("%d",&c);
if (c==1)
{
n=(struct node*)malloc(sizeof(struct node));
printf("enter element");
scanf("%d",&ele);
n->data =ele;
n->next=first;
first=n;
}
if (c==2)
{
n=(struct node*)malloc(sizeof(struct node));
printf("enter element");
scanf("%d",&ele);
n->data =ele;
n->next=NULL;
if(first==NULL)
{
first=n;
}
else
{
current=first;
while(current->next != NULL)
{
current=current->next;
}
current->next=n;
}
}
if (c==3)
{


n=(struct node*)malloc(sizeof(struct node));
printf("enter element");
scanf("%d",&y);
n->data =y;
n->next=NULL;
printf("enter node element");
scanf("%d",&ele);
if(first==NULL)
{
first=n;
}
else
{	
current=first;
while(current->data != ele)
{
current=current->next;
}
n->next=current->next;
current->next=n;
}
}
}

if (ch==2)
{
printf("1.at beggining 2.at end 3.after a node");
scanf("%d",&c);
if (c==1)
{
current=first;
first=current->next;
}
if (c==2)
{
current=first;
while(current->next->next != NULL)
{
current=current->next;
}
current->next=NULL;
}
if (c==3)
{
printf("enter element");
scanf("%d",&ele);
current=first;
while(current->data != ele)
{
current=current->next;
}
current->next=current->next->next;
}
}

if (ch==3)
{
if(first==NULL)
{
printf("empty");
}
else
{
current=first;
while(current!= NULL)
{
printf("%d  ",current->data);
current=current->next;
}
}
}

printf("continue? 0.yes 1.no");
scanf("%d",&z);
} 

}

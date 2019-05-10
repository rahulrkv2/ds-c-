#include<stdio.h>
#include<malloc.h>
struct node
{
int coef,exp;
struct node *next;
}*result,*n,*current1,*current,*current2,*first,*second,*i,*j;

int main()
{
int t1,t2,c,p,e,k,x,y,ch,sum;
printf("no.of terms in 1st polynomial");
scanf("%d",&t1);
printf("no.of terms in 2nd polynomial");
scanf("%d",&t2);
first=NULL;
for(k=0;k<t1;k++)
{
printf("enter coeff ");
scanf("%d",&c);
printf("enter power of x ");
scanf("%d",&e);
n=(struct node*)malloc(sizeof(struct node));
n->coef =c;
n->exp =e;
n->next=NULL;
if(first==NULL)
{
first=n;
current=first;
}
else
{

current->next=n;
current=current->next;
}

}
current=first;
while(current!= NULL)
{
printf("%dx^%d ",current->coef,current->exp);
current=current->next;
}
printf("\n");

//FIRST POLYNOMIAL

for(k=0;k<t2;k++)
{
printf("enter coeff ");
scanf("%d",&c);
printf("enter power of x ");
scanf("%d",&e);
n=(struct node*)malloc(sizeof(struct node));
n->coef =c;
n->exp =e;
n->next=NULL;
if(second==NULL)
{
second=n;
current=second;
}
else
{

current->next=n;
current=current->next;
}

}
current=second;
while(current!= NULL)
{
printf("%dx^%d ",current->coef,current->exp);
current=current->next;
}

//SECOND POLYNOMIAL
printf("enter choice 1.addition 2.multiplication");
scanf("%d",&ch);

if(ch==1)
	{
		current1=first;
		current2=second;
		printf("\n\n\nThe result after addition is:\n\n\n");
		while(current1!=NULL && current2!=NULL)
		{
			if(current1->exp==current2->exp)
			{
				x=current1->coef;
			        y=current2->coef;
				sum=x+y;
				p=current1->exp;
				printf("%d",sum);
				printf("x^%d",p);
				current1=current1->next;
				current2=current2->next;
				
			}
			else
			{
				if(current1->exp>current2->exp)
				{
					printf("%d",current1->coef);
					printf("x^%d",current1->exp);
					current1=current1->next;
				}
				else if(current1->exp<current2->exp)
				{
					printf("%d",current2->coef);
					printf("x^%d",current2->exp);
					current2=current2->next;
				}
			}
		printf(" ");
		}
		printf("\n\n\n");
	}
	if(ch==2)
	{
		for(current1=first;current1!=NULL;current1=current1->next)
		{
			for(current2=second;current2!=NULL;current2=current2->next)
			{
				n=(struct node*)malloc(sizeof(struct node));
				c=(current1->coef)*(current2->coef);
				p=(current1->exp)+(current2->exp);
				n->coef=c;
				n->exp=p;
				n->next=NULL;
				if(result==NULL)
				{
					result=n;
					n->next=NULL;
				}
				else
				{
					current=result;
					while(current->next!=NULL)
						current=current->next;
					current->next=n;
					n->next=NULL;
				}
			}
		}
	for(current1=result;current1->next!=NULL;current1=current1->next)
		{
			for(current2=current1;current2->next!=NULL;current2=current2->next)
			{
				if(current2->next->exp==current1->exp)
				{
					current1->coef=(current1->coef)+(current2->next->coef);
					current2->next=current2->next->next;
				}
			}
		}
		printf("\n\n\nThe result after multiplication is\n\n\n");
		for(current=result;current!=NULL;current=current->next)
		{
			printf("%dx^%d  ",current->coef,current->exp);
		}
	}
}

#include<stdio.h>
void main()
 {
  int topa,topb,n,a[20],choice,choice1,choice2,item,i;
  topa=-1;
  printf("\n1.stack1 2.stack2");
  scanf("%d",&choice);
  if(choice==1)
   {
    printf("enter the no of elements in array");
    scanf("%d",&n);
    topb=n;  
    do
     {
      printf("\n1.push 2.pop 3.display 4.quit\n");

      scanf("%d",&choice1);
    
      switch(choice1)
       {
        case 1:
         {
               if(topa==n-1)
                {
                 printf("stack overflow");
                }
               else
                {
                 printf("enter the item to be pushed into the stack");
                 scanf("%d",&item);
                 topa=topa+1;
                 a[topa]=item;
		printf("topa now = %d",topa);
                }
               break;
         }
        case 2:             
         {
	            
		if(topa==-1)
                {
               printf("stack underflow");
                }
               else
                {
                 printf("popped element is:%d\n",a[topa]);
                 topa=topa-1;
                }
               break;
         }
        case 3:
         { 
                 if(topa==-1)
                {
                 printf("stack underflow");
                }
               else
                {
                 printf("stack elements:\n");
                 for(i=topa;i>=0;i--)
                  {
                   printf("%d\n",a[i]);
                  }
                }
               break;
         }
        case 4:
             break;
        default:
             printf("wrong choice\n");
             break;
   }}while(choice1!=4);
  }
  if(choice==2)
   {
    printf("enter the no of elements in array");
    scanf("%d",&n);
    topb=n;
    do
     {
      printf("\n1.push 2.pop 3.display 4.quit\n");
  
      scanf("%d",&choice2);
      switch(choice2)
       {
        case 1:
         {
             if(topb-1==topa)
              {
               printf("stack overflow");
              }
             else
              {
               printf("enter the item to be pushed into the stack");
               scanf("%d",&item);
               topb=topb-1;
               a[topb]=item;
              }
             break;
         }
        case 2:
         {
             if(topb==n)
              {
               printf("stack underflow");
              }
             else
              {
               printf("popped element is:%d\n",a[topb]);
               topb=topb+1;
              }
             break;
         }
        case 3:
         { 
             if(topb==n)
              {
               printf("stack underflow");
              }
             else
              {
               printf("stack elements:\n");
               for(i=topb;i<n;i++)
                {
                 printf("%d\n",a[i]);
                }
              }
             break;
         }
        case 4:
             break;
        default:
             printf("wrong choice\n");
             break;
   }}while(choice2!=4);
  }
 }
          

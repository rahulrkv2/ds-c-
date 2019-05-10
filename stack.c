#include<stdio.h>
void main()
 {
  int top=-1,a[20],choice,item,i,n;
  printf("enter the no of elements in array");
  scanf("%d",&n);
  do
   {
    printf("\n1.push 2.pop 3.peek 4.display 5.quit\n");
    scanf("%d",&choice);
    switch(choice)
     {
      case 1:
       {
             if(top==n-1)
              {
               printf("stack overflow");
              }
             else
              {
               printf("enter element");
               scanf("%d",&item);
               top=top+1;
               a[top]=item;
              }
             break;
       }
      case 2:
       {
             if(top==-1)
              {
               printf("stack underflow");
              }
             else
              {
              
               top=top-1;
              }
             break;
       }
      case 3:
       {
             if(top==-1)
              {
               printf("stack underflow");
              }
             else
              {   printf("top element:\n");
               printf("%d",a[top]);
               printf("\n");
              }
             break; 
       }
      case 4:
       { 
             if(top==-1)
              {
               printf("stack underflow");
              }
             else
              {
               printf("stack elements:\n");
               for(i=top;i>=0;i--)
                {
                 printf("%d\n",a[i]);
                }
              }
             break;
       }
      case 5:
             break;
      default:
             printf("wrong choice\n");
             break;
  }}while(choice!=5);      
 }        
             
        
                                                                                                                                        

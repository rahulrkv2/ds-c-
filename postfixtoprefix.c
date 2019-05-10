#include<stdio.h>
#include<string.h>
int main()
{
int i,j=-1,k=0;
char a[100],str[100],x[100];
printf("enter postfix expression  ");
gets(str);
for(i=0;i<strlen(str);i++)
{
if (str[i]=='(')
{j++;
a[j]=str[i];
}
else if (str[i]=='^')
{if((j==-1))
{j++;
a[j]=str[i];
}
else if(a[j]=='(')
{j++;
a[j]=str[i];
}
else if(a[j]=='+')
{j++;
a[j]=str[i];
}
else if(a[j]=='-')
{j++;
a[j]=str[i];
}
else if(a[j]=='*')
{j++;
a[j]=str[i];
}
else if(a[j]=='/')
{j++;
a[j]=str[i];
}
else
{x[k]=a[j];
k++;
a[j]=str[i];
}
}
else if (str[i]=='/')
{if((j==-1))
{j++;
a[j]=str[i];
}
else if(a[j]=='(')
{j++;
a[j]=str[i];
}
else if(a[j]=='+')
{j++;
a[j]=str[i];
}
else if(a[j]=='-')
{j++;
a[j]=str[i];
}
else 
{x[k]=a[j];
k++;
a[j]=str[i];
}
}
else if (str[i]=='*')
{if((j==-1))
{j++;
a[j]=str[i];
}
else if(a[j]=='(')
{j++;
a[j]=str[i];
}
else if(a[j]=='+')
{j++;
a[j]=str[i];
}
else if(a[j]=='-')
{j++;
a[j]=str[i];
}
else
{x[k]=a[j];
k++;
a[j]=str[i];
}
}
else if (str[i]=='+')
{if(j==-1)
{j++;
a[j]=str[i];
}
else if(a[j]=='(')
{j++;
a[j]=str[i];
}
else
{x[k]=a[j];
k++;
a[j]=str[i];
}
}
else if (str[i]=='-')
{if(j==-1)
{j++;
a[j]=str[i];
}
else if(a[j]=='(')
{j++;
a[j]=str[i];
}
else
{x[k]=a[j];
k++;
a[j]=str[i];

}
}
else if (str[i]==')')
{while(a[j]!='(')
{x[k]=a[j];
k++;
j=j-1;
}
j=j-1;
}
else
{x[k]=str[i];
k=k+1;
}
printf("x= ");
puts(x);
for(int l=0;l<=j;l++)
{printf("%c ",a[l]);
}
printf("\n");
printf("j=%d \n",j);
printf("k=%d \n\n",k);
}

while(j!=-1)
{x[k]=a[j];
k++;
j--;
}
printf("\n");
puts(x);


for (i=0;i<strlen(x);i++)
{
while (x[i]!='+'||'-'||'*'||'/'||'^')
{
printf("%c = ",x[i]);
scanf("%c",x[i]);
}
}

puts(x);
}



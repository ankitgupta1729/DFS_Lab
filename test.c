#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
int matchstring(char*,char*,int,int);
int main()
{
  bool isFound;
  char *str1,*str2,ch,ch1,count=0,count1=0;
  int i,n,j,x=0;
  str1=(char*)malloc(sizeof(char));
  str2=(char*)malloc(sizeof(char));
  printf("Enter the last string:");
  i=0;
   while(1)
     {
      ch=getchar();
      //p[i]=ch;  
      str1=(char*)realloc(str1,(i+1)*sizeof(char));
      if(ch=='\n')
          break;
      else
       {
           i++;
           count++;
       }    
    }
   for(i=0;i<count;i++)
          printf("%c",str1[i]);  
  printf("Enter the number of string excluding last string:");
  scanf("%d",&n);
  for(int j=0;j<n+1;j++)
  {
   while(1)
     {
      i=0;
      ch1=getchar();
      //printf("%c",ch1);
      //q[i]=ch;  
      str2=(char*)realloc(str2,(i+1)*sizeof(char));
      if(ch1=='\n')
          break;
      else
       {
           i++;
           count1++;
       }    
    }
   //printf("%d",count);
   for(i=0;i<count1;i++)
          printf("%c",str2[i]);
   x=x+matchstring(str1,str2,count,count1);   
   if(j!=n)
      printf("Enter the string%d:",j+1);
  }
 if(x==n)
    printf("order preserved in all strings");
 else
    printf("order is not preserved in all strings");  
}
int matchstring(char *p, char *q,int m, int n)
{
  if(n<m)
     return 0;
  else
    {
      
       
    }
}

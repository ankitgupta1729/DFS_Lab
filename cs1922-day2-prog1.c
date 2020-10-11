/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :    Suppose the version number of a software is denoted as x1.x2.···.xn where x1,x2,..., and xn denote the version number, subversion number, and so on, respectively.  E.g.,GCC 9.1 is a version of GNU C Compiler.Consider that xi∈[0,9] for all i.  Given the lower and upper bound of version numbers of a software as user inputs, list up all the possible versions that might exist within the given range.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,n,*ptr1,*ptr2;
  printf("Enter the number of components in the version:");
  scanf("%d",&n);
  ptr1=(int*)malloc(n*sizeof(int));
  ptr2=(int*)malloc(n*sizeof(int));
  printf("Enter the lower bound for version:");
  for(i=0;i<n;i++)
     scanf("%d",&ptr1[i]);
  printf("Enter the upper bound for version:");
  for(i=0;i<n;i++)
     scanf("%d",&ptr2[i]);
  for(i=n-1;i>=0;i--)
     {
         while(ptr1[i]>=0 && ptr1[i]<=9 && ptr1[i]<=ptr2[i])
         {
           ptr1[i]++;
           for(j=0;j<n;j++)
             printf("%d.",ptr1[j]);
           printf("\n");
           ptr1[i]=0;
         }
     }
  
}


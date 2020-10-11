/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Write a program to print the following pattern using generic controls over print.  Let the line number be user input.
*     *
 *   *
  * *
   *  
*/

#include<stdio.h>
int main()
{
   int n,m,i,j,k;
   printf("Enter the length(should be odd) of 1st line: ");
   scanf("%d",&n);
   m=(n/2)+1;
   for(i=0;i<m;i++)
      {
        for(k=0;k<i;k++)
          printf(" ");
        printf("*");
        n--;
        n--;
        for(j=0;j<n;j++)
           printf(" ");
        if(i!=m-1)
          printf("*\n");
      }
}

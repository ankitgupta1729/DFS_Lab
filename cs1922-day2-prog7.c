/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Given a positive integer n as user input, find out the numberof trailing zeros in n!.*/

#include<stdio.h>
#include<math.h>
int main()
{
  int n,m=0,x,i;
  printf("Enter a positive number: ");
  scanf("%d",&n);
  i=1;
  do
     {
       x=pow(5,i);
       m +=floor(n/x);
       i++;
     }while(n>=x);
  printf("No. of trailing zeros in n! are: %d",m); 
}

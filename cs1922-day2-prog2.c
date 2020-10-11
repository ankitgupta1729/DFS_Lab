/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :    An n-digit number is SPECIAL if the addition of its sum of the digits and the product of its digits equals to the original number.  E.g., 19 is a SPECIAL 2-digit number.  Write a program to verify whether a given number is SPECIAL or not.Extend this program to verify whether there exists any SPECIAL number for a given value of number of digits n.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
   int x,n,r,i,sum=0,sum1=0,prod=1,prod1=1,prod2=1,m,*ptr,count=0,p,q,temp,temp1,sum2=0,flag=0,count1=0;
                                                //logic for a given no. n  
/* printf("enter the number: ");
   scanf("%d",&n);
   int temp1=n;
   int temp2=n;
   while(temp1!=0)
      {
       r=temp1%10;
       temp1=temp1/10;
       sum +=r;
      }
    while(temp2!=0)
      {
       r=temp2%10;
       temp2=temp2/10;
       prod *=r;
      }
     x= sum+prod;
     if(x==n)
        printf("Given number is special\n");
     else
        printf("Given number is not special\n");*/
    printf("Enter the no. of digits in the number: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the Number digit by digit by pressing enter \n");   
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
    for(i=0;i<n;i++)
        printf("%d",ptr[i]);
    for(i=n-1;i>=0;i--)
           sum1 +=ptr[i];
    for(i=n-1;i>=0;i--)
           prod1 *=ptr[i];
    x=sum1+prod1;
    for(i=n-1;i>=0;i--)
      {  
            m=x%10;
            if(ptr[i]==m)
               count+=1;
            x=x/10;
      }
     if(count==n)
         printf("Given no. is special\n");
     else
         printf("Given no. is not special\n");
//To check whether a special number exist or not for the given no. of digits
p=pow(10,n-1);
q=pow(10,n)-1;
while(p!=q)
  {
   temp=p;
   temp1=p;
   while(temp!=0)
     {
       temp=temp%10;
       sum2+=temp;
       temp = temp/10;
     }
    while(temp1!=0)
     {
       temp1=temp1%10;
       prod2*=temp1;
       temp1 = temp1/10;
     }
    if(p==(sum2+prod2))
       flag=1;
    p++; 
  }
if(flag==1)
   printf("A special number exist in the given range");
else
   printf("A special number does not exist in the given range");        
}

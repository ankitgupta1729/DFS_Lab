/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Consider an n-digit number.  Square it and add the right n digits to the left n or n−1 digits.  If the resultant sum is same as the original number, then it is called a Kaprekar number.E.g., 45 is a Kaprekar number.Write a program to verify whether a given number is Kaprekar or not.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,num,temp,num1,temp1,count=0,i,j,r,*ptr,*ptr1,*ptr2,*ptr3,*ptr4,*ptr5,res,carry,count1,count2=0,count3=0,count4=0,temp2,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    ptr1=(int*)malloc((2*n)*sizeof(int));
    ptr2=(int*)malloc(n*sizeof(int));
    ptr3=(int*)malloc((n+1)*sizeof(int));
    ptr4=(int*)malloc((n-1)*sizeof(int));
    ptr5=(int*)malloc(n*sizeof(int));
    printf("Enter the number");
    scanf("%d",&num);
    num1=num*num;
    temp=num1;
    temp1=num1;
    temp2=num;
    //printf("%d\n",num1);
    i=n-1;
    while((temp !=0) && (count != n) && (i>=0))
      { 
           r = temp%10;
           ptr[i]=r;
           i--;
           temp=temp/10;
           count++; 
      }    
    /*for(i=0;i<n;i++)
       printf("%d",ptr[i]);
    printf("\n");*/
     i=n-2;
    while((temp !=0) && (count3 != (n-1)) && (i>=0))
      { 
           r = temp%10;
           ptr4[i]=r;
           i--;
           temp=temp/10;
           count3++; 
      }
    /*for(i=0;i<(n-1);i++)
       printf("%d",ptr4[i]);
    printf("\n");*/
    for(k=1;k<n;k++)
       ptr4[k]=ptr4[k-1];
    ptr4[0]=0;
    /*for(k=0;k<n;k++)
       printf("%d",ptr4[k]);
    printf("\n");*/
    
    for(i=0;i<2*n,temp1!=0;i++)
       {
           res=temp1%10;
           ptr1[i]=res;
           temp1=temp1/10;     
       }
    /*for(i=0;i<2*n;i++)
       printf("%d",ptr1[i]);
    printf("\n");*/
    j=0; 
    for(i=2*n-1;i!=(n-1);i--)
      {
       ptr2[j]=ptr1[i];
       j++;
      }
    /*for(i=0;i<n;i++)
       printf("%d",ptr2[i]);
    printf("\n");*/
   
    for(i=n-1;i>=-1;i--)
       {
          ptr3[i]=carry+ptr[i]+ptr2[i];
          if(ptr3[i]<=9)
             carry=0;
          if(ptr3[i]>9)
            {
              ptr3[i]=ptr3[i]%10;
              carry=1;
            }
       }
    carry=0;
    for(i=n-1;i>=-1;i--)
       {
          ptr5[i]=carry+ptr[i]+ptr4[i];
          if(ptr5[i]<=9)
             carry=0;
          if(ptr5[i]>9)
            {
              ptr5[i]=ptr5[i]%10;
              carry=1;
            }
       }
    /*for(i=-1;i<=(n-1);i++)
          printf("%d",ptr3[i]);*/
     i=n-1;
     while(num!=0)
        {
          if(ptr3[i]==num%10)
             count2++;
          i--;
          num=num/10;
        }
     i=n-1;
     while(temp2!=0)
        {
          if(ptr5[i]==temp2%10)
             count4++;
          i--;
          temp2=temp2/10;
        }
     //printf("\n%d",count2);
     if(count2==n)
         printf("it is a Kaprekar number\n");
     else if(count4==n)
         printf("it is a Kaprekar number\n");
     else
         printf("It is not a Kaprekar number\n"); 
}

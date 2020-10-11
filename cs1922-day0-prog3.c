/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :    Given a list of positive integers, find the standard deviation of the numbers.Note that the number of integers is not known in advance. The user will supply the input one by one, and enter 0 when done. */

//Assuming standard deviation is for population, not for sample
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int std_dev(int*,int);
int main()
{
    int *ptr,ch,count=0,i=0,j;
    printf("Enter positive integers: ");
    ptr=(int*)malloc(sizeof(int));
    while(1)
     {
       scanf("%d",&ptr[i]);
       ptr=(int*)realloc(ptr,(i+1)*sizeof(int)); 
       if(ptr[i] ==0)
           break;
       else
         {
            i++;   
            count++;
         }
      }
    printf("numbers are:\n");    
    for(j=0;j<count;j++)
          printf("%d\n",ptr[j]);
    std_dev(ptr,count);
}
int std_dev(int *p,int n)
 {
     int i,sum=0;
     float mean,sum1=0.0,ans; 
     for(i=0;i<n;i++)
             sum += p[i];
     mean=(float)sum/n;
     printf("mean is: %f\n",mean);
     for(i=0;i<n;i++)
            sum1 += (p[i]-mean)*(p[i]-mean);
     ans=sqrt(sum1/n);
     printf("Standard deviation of the given numbers is: %f\n",ans);
 }

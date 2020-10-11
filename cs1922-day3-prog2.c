/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Consider 2 sets of integers,A and B, are stored in arrays. Write a program to find the number of (possibly overlapping) occurrences of the sequence B in A.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *arr1,*arr2,i,m,n,j,count=0;
   printf("Enter the number of elements in first array A: ");
   scanf("%d",&m);
   printf("Enter the number of elements in second array B: ");
   scanf("%d",&n);
   arr1=(int*)malloc(m*sizeof(int));
   arr2=(int*)malloc(n*sizeof(int));
   printf("Enter integers of 1st array A:\n");
   for(i=0;i<m;i++)
     scanf("%d",&arr1[i]);
   printf("Enter integers of 2nd array B:\n");
   for(i=0;i<n;i++)
     scanf("%d",&arr2[i]);
   printf("Elements of 1st array A are:\n");
   for(i=0;i<m;i++)
     printf("%d",arr1[i]);
   printf("\nElements of 2nd array B are:\n");
   for(i=0;i<n;i++)
     printf("%d",arr2[i]);
   for(i=0;i<n;i++)
     {
       for(j=0;j<m;j++)
          {
             if(arr2[i]==arr1[j])
                 {
                      count++;
                      break;
                 }
          }
     }
    printf("\nNo. of (possibly overlapping) occurrences of the sequence B in A is: %d ",count);
}

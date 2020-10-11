#include<stdio.h>
#include<stdlib.h>
int IsSubsetSum(int*,int,int);
int main()
{
   int num,i,sum=0,n=0,j;
   printf("Enter the number: ");
   scanf("%d",&num);
   for(i=1;i<num;i++)
     {
        if((num%i)==0)
            n++;
     }
   int *ptr = (int*)malloc(n*sizeof(int));
   printf("Divisors will be\n");                                                        
   for(i=1,j=0;i<num;i++)
     {
        if((num%i)==0)
           {
            ptr[j]=i;
            printf("%d\n",ptr[j]);
            j++;
           }
     }
   if(IsSubsetSum(ptr,n,num)==1)
        printf("Given no. is pseudoperfect");
   else
        printf("Given no. is not pseudoperfect");  
}
int IsSubsetSum(int *p,int n,int num)
{
 	int subset[n+1][num+1],i,j;
        for(i=0;i<=n;i++)
              subset[i][0]=1;
        for(j=1;j<=num;j++)
              subset[0][j]=0;
        for (int i = 1; i <= n; i++) 
          { 
            for (int j = 1; j <= num; j++) 
             { 
               if(j<p[i-1]) 
                 subset[i][j] = subset[i-1][j]; 
               if (j >= p[i-1]) 
                 subset[i][j] = subset[i-1][j] || subset[i - 1][j-p[i-1]]; 
             }
          } 

   return subset[n][num];         
}

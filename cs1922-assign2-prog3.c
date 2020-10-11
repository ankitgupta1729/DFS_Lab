#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0; 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry;  
        res[i] = prod % 10;   
        carry  = prod/10;     
    } 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 
int main()
{
	int i,j,k,count=0,count1=1,count2=1,count3=1,count4=1;
	int *arr1,*arr2;
	int L1[1000000],L2[1000000];
	char ch1,ch2;
	arr1=(int*)malloc(sizeof(int));
	arr2=(int*)malloc(sizeof(int));
	i=0,j=0;
    while(1)
     {
       scanf("%d",arr1+i);
       scanf("%c",&ch1);
       arr1=(int*)realloc(arr1,(i+2)*sizeof(int)); 
       if(ch1 =='\n')
           break;
       else
         {
            i++;   
            count1++;
         }
      }
    while(1)
     {
       scanf("%d",arr2+j);
       scanf("%c",&ch2);
       arr2=(int*)realloc(arr2,(j+2)*sizeof(int)); 
       if(ch2 =='\n')
           break;
       else
         {
            j++;   
            count2++;
         }
      }
     /*printf("arrays are:\n");    
    for(k=0;k<count1;k++)
          printf("%d",arr1[k]);
    printf("\n");
    for(k=0;k<count2;k++)
          printf("%d",arr2[k]);
    printf("\n");  */
    L1[0]=1;
    int L1_size=1; 
    i=0;
    for(int x= arr1[0] ; count3 <= count1 ; count3++)
      {
    	L1_size=multiply(x,L1,L1_size);
    	i++;
    	x=arr1[i];
       }
    int L3[L1_size];   
    for (i=L1_size-1, j=0; i>=0; i--,j++)
        L3[j]=L1[i];
    for(i=0;i<L1_size;i++)
        L1[i]=L3[i];
    /*for(i=0;i<L1_size;i++)
        printf("%d",L1[i]);     
    printf("\n");  */  
    L2[0]=1;
    int L2_size=1; 
    i=0;
    for(int x= arr2[0] ; count4 <= count2 ; count4++)
      {
      L2_size=multiply(x,L2,L2_size);
      i++;
      x=arr2[i];
       }
    int L4[L2_size];   
    for (i=L2_size-1, j=0; i>=0; i--,j++)
        L4[j]=L2[i];
    for(i=0;i<L2_size;i++)
        L2[i]=L4[i];
   /* for(i=0;i<L2_size;i++)
        printf("%d",L2[i]);  
    printf("\n");    */  
    if(L1_size > L2_size)
        printf("L1\n");
    else if(L2_size > L1_size)
        printf("L2\n");
    else
    {
      for(i=0;i<L1_size;i++)
      {
        if(L1[i]==L2[i])
        {
          count++;
          continue;
        }
        else if (L1[i]>L2[i])
        {
          printf("L1\n");
          break;
        }
        else
        {
          printf("L2\n");
          break;
        }
      }
    }          
    if(count==L1_size)
      printf("L1 L2\n");
	return 0;
}
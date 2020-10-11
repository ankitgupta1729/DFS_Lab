#include<stdio.h>
int cantor(int);
int main()
{
	int n,i;
	printf("Enter the no. of test cases : \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter numbers: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		cantor(arr[i]);
}
int cantor(int N)
{
	int i=1,j=1,k=1;
	while(k<N)
	{
		j++;
		k++;
		if(k==N)
		   break;
		while((j>1) && (k < N))
		{
			j--;
			i++;
			k++;
			if(k==N)
				break;
		}
		if(k<N)
		{	
		i++;
		k++;
		if(k==N)
			break;
	    }
		while(i>1 && (k<N))
		{
			i--;
			j++;
			k++;
			if(k==N)
				break;
		}
	}
printf("%d/%d\n",i,j);
}
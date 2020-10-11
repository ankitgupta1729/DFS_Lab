/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :    Write a program to verify whether an input matrix is square or not. If it is not a square matrix, print NOT SQUARE. Otherwise, further check whether it is singular (determinant is 0) or unimodular (determinant is 1).Accordingly, print SQUARE - SINGULAR or SQUARE - UNIMODULAR, otherwise print SQUARE-OTHER. */

#include<stdio.h>
#include<stdlib.h>
int compute_determinant(int**,int);
int getcofactor(int**,int**,int,int,int);
int main()
{
      int row,col,**ptr,i,j,c;
      printf("Enter the no. of rows and no. of columns for input matrix");
      scanf("%d%d",&row,&col);
      ptr=(int**)malloc(row*sizeof(int*));
      for(i=0;i<row;i++)
         ptr[i]=(int*)malloc(col*sizeof(int));
      printf("Enter elements of the matrix:\n");
      for(i=0;i<row;i++)
         {
            for(j=0;j<col;j++)
                scanf("%d",&ptr[i][j]);
         }
       for(i=0;i<row;i++)
         {
            for(j=0;j<col;j++)
                printf("[%d][%d]=%d\n",i,j,ptr[i][j]);
         }
       if(row==col)
         { 
          printf("SQUARE\n"); 
          c=compute_determinant(ptr,row);
          printf("Determinant is:%d\n",c);
          if(c==0)
             printf("SQUARE-SINGULAR");
          else if(c==1)
             printf("SQUARE-UNIMODULAR");
          else
             printf("SQUARE-OTHER");
         }
        else
           printf("NOT SQUARE");
}
int compute_determinant(int **p,int n)
{
      int i,D=0;
      int sign=1; 
      int **temp;
      temp=(int**)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
         temp[i]=(int*)malloc(n*sizeof(int));
      if(n==1)
         return p[0][0];
      for(i=0;i<n;i++)
         {
             if(i%2==0)
                  sign=1;
             else
                  sign=-1; 
             getcofactor(p,temp,0,i,n);
             D = D+ sign*p[0][i]*compute_determinant(temp,n-1);
             sign=-1; 
         }
      return D;
}

int getcofactor(int **matrix,int **temp,int p,int q, int n)
{
    int i=0,j=0,row,col;
    for(row=0;row<n;row++)
      {
	for(col=0;col<n;col++)
           {
		if(row!=0 && col!=q)
                  {
                    temp[i][j]=matrix[row][col];
                    j++;
                    if(j==n-1)
                     { 
                          j=0;
                          i++;
                     }
                  }
           }
         
      }
}

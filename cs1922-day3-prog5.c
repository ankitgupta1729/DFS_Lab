/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Suppose complex numbers are stored using structure variables representing the real and imaginary parts separately.If x and y are two such variables then write logical conditions that evaluate to TRUE if and only if: 1) x+y is an imaginary number without any real component. 2) x−y is a real number without any imaginary component. 3) x and y are complex conjugate. 4) Both x and y are real numbers.*/

#include<stdio.h>
typedef struct 
{
  double real;
  double imaginary;
}complex;

int main()
{
  complex m,n;
  printf("Enter the real and imaginary part for the first complex number: \n");
  scanf("%lf%lf",&m.real,&m.imaginary);   
  //printf("%lf%lf",m.real,m.imaginary);
  printf("Enter the real and imaginary part for the second complex number: \n");
  scanf("%lf%lf",&n.real,&n.imaginary);   
  //printf("%lf%lf",n.real,n.imaginary);
  if((m.real+n.real)==0 && (m.imaginary+n.imaginary)!=0)
     printf("x+y is imaginary\n");
  else
     printf("x+y is not imaginary\n");   
  if((m.imaginary-n.imaginary)==0)
     printf("x-y is real\n");
  else
     printf("x-y is not real\n");   
  if(m.real==n.real && (m.imaginary+n.imaginary)==0)
     printf("x & y are complex conjugate\n");
  else
     printf("x & y are not complex conjugate\n");
  if(m.imaginary==0 && n.imaginary==0)
     printf("x & y are real\n");
  else
     printf("x & y are not real\n");    
}

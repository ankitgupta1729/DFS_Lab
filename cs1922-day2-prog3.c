/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Suppose m and n are (signed) integers and x and y are floating variables.Write logical conditions that evaluate to TRUE if and only if: 1) x+y is an integer. 2) m lies strictly between x and y. 3) m equals the integer part of x. 4) x is positive with integer part at least 3 and with fractional part less than 0.3. 5) m and n have the same parity (i.e., are both odd or both even). 6) m is a perfect square.*/

#include<stdio.h>
int main()
{
   float x,y,z,z1,z2,z3,z5;
   int m,n,c,p;
   printf("Enter the values of x and y:");
   scanf("%f%f",&x,&y);
   printf("Enter the value of m and n:");
   scanf("%d%d",&m,&n);
   c=sizeof(int);
   z=(float)x+y;
   //printf("%f\n",z);
   z1=(int)x+y;
   z3=(int)x;
   z5=(float)x-z3;
   if(z==z1)
        printf("x+y is an integer\n");
   else
        printf("x+y is not an integer\n");
   z2=(float)m;
   //printf("%f\n",z2);
   if(z2>x && z2<y)
        printf("m lies between x and y\n"); 
   else
        printf("m does not lie between x and y\n");
   if(m==z3)
        printf("m equals the integral part of x\n");
   else
        printf("m does not equal to integral part of x\n");
   if(z3 >=3 && z5 < 0.3)
        printf("here, x is positive with integer part at least 3 and with fractional part less than 0.3\n");
   else
        printf("here, x is positive with not integer part at least 3 or with not fractional part less than 0.3\n");
   if((m%2==0) || (n%2==0) )
        printf("Both m and n are even\n");
   else if((m%2==1) || (n%2==1))
        printf("Both m and n are odd\n");
   p= m%10;
   if(p==2 || p==3 || p==7 || p==8 )
       printf("m is not a perfect square");
   else
       printf("m is not a perfect square");
}

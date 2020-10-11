/*						   Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :    Define a structure for representing complex numbers.  Using this definition, write a function that takes three real numbers,a,b and c as input, and returns the two roots of the quadratic equation ax^2+bx+c= 0.  Finally, compute the ratio of the two roots obtained.  Recall that, for dividing two complex numbers, you need to multiply the numerator and denominator by their complex conjugates and then simplify. */

#include<stdio.h>
#include<math.h>
int main()
{
      int a,b,c,D,x5,x6,x7;
      double x1,x2,x3,x4,rat;
      printf("Enter a:");
      scanf("%d",&a);
      printf("Enter b:");
      scanf("%d",&b);
      printf("Enter c:");
      scanf("%d",&c);
      D= b*b - 4*a*c;
      if(D >=0)
          {
              x1=(double)(-b+sqrt(D))/(2*a);
              x2=(double)(-b-sqrt(D))/(2*a);
              printf("Real roots are: %lf and %lf\n",x1,x2);
              if(x2 !=0)
                 rat=(double)x1/x2;
              else
                 printf("ratio can't be computed because denominator is zero");
              printf("ratio is: %lf",rat);
          }
      else
          {
             x3=(double) -b/(2*a);
             x4=(double) sqrt(-D)/(2*a);
             printf("complex roots are: %lf+i%lf and %lf-i%lf\n",x3,x4,x3,x4);
             if(x3!=0.00 && x4 !=0.00 )
               {
                   x5=(int)(-b/(2*a))*(-b/(2*a)) - sqrt(-D)/(2*a)*sqrt(-D)/(2*a);
                   x6=(int)2*(-b/(2*a))*sqrt(-D)/(2*a);
                   x7=(int)(-b/(2*a))*(-b/(2*a)) + sqrt(-D)/(2*a)*sqrt(-D)/(2*a);
                    if(x5%x7==0 && x6%x7==0)
                      {
                       if(x6/x7 >= 0)
                         printf("ratio is %f + i %f ",(float)x5/x7,(float)x6/x7);
                       else
                         printf("ratio is %f - i %f ",(float)x5/x7,(float)x6/x7);
                      }
                    else if (x5%x7 ==0 && x6%x7 !=0)
                       {
                          if(x6/x7 >=0)
                                printf("ratio is %f +i (%d/%d)",(float)x5/x7,x6,x7);
                          else
                                printf("ratio is %f -i (%d/%d)",(float)x5/x7,x6,x7);
                      }
                    else if (x5%x7 !=0 && x6%x7 ==0)
                       {
                          if(x6/x7 >=0)
                                printf("ratio is (%d/%d) +i %f",x5,x7,(float)x6/x7);
                          else
                                printf("ratio is (%d/%d) -i %f",x5,x7,(float)x6/x7);
                       }			   
                    else
                    {
                     if(x6/x7 >=0)
                                printf("ratio is (%d/%d) +i (%d/%d)",x5,x7,x6,x7);
                          else
                                printf("ratio is (%d/%d) -i (%d/%d)",x5,x7,x6,x7);     
                    }
		}
              else
                   printf("root can't be computed");
          }
           

}

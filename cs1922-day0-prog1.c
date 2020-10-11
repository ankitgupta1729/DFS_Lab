						/* Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :   
					           Program Description :    Given two positive integers, find their lowest common multiple (LCM)                                                  
                                                */

#include<stdio.h>
int gcd(int a,int b)
  {
      if(b==0)
        return a;
      else
        return gcd(b,a%b);
  }
int main()
{
    int a,b,c;
    printf("Enter 2 numbers for which you have to find LCM : ");
    scanf("%d%d",&a,&b);
    c= gcd(a,b);
    printf("LCM of these 2 numbers will be: %d\n",(a*b)/c);
}

#include<stdio.h>
int main()
{
	int n,i,j,p,q,r,s,p1,q1,r1,s1,count1=0,count2=0,count3=0,count4=0,ct1=0,ct2=0,ct3=0,ct4=0;
	char ch1,ch2,ch3,ch4;
	scanf("%d\n",&n);
	char par1[1000000],par2[1000000],chd1[2000000],chd2[2000000];
   //parent1
    for(i=0;i<1000000;i++)
    {
    	scanf("%c",&ch1);
    	if(ch1 == '\n')
    		break;
    	else
    	{
          par1[i]=ch1;
          count1++;
    	}
    }
    //parent2
    for(i=0;i<1000000;i++)
    {
    	scanf("%c",&ch2);
    	if(ch2 == '\n')
    		break;
    	else
    	{
          par2[i]=ch2;
          count2++;
    	}
    }
    //child1
    for(i=0;i<1000000;i++)
     {
    	scanf("%c",&ch3);
    	if(ch3 == '\n')
    		break;
    	else
    	{
          chd1[i]=ch3;
          count3++;
    	}
     }
    //child2
    for(i=0;i<1000000;i++)
     {
    	scanf("%c",&ch4);
    	if(ch4 == '\n')
    		break;
    	else
    	{
          chd2[i]=ch4;
          count4++;
    	}
     }
 if(0<n && n <=1)
  {
    for(p=0,s=0;p<count1 && s<count3;p++,s++)
    {
    	if(par1[p]==chd1[s])
           ct1++;
        else
        	break;
    }
    for(q=count1-1,r=count4-1;q>=0 && r>=0;q--,r--)
    {
    	if(par1[q]==chd2[r])
           ct2++;
        else
        	break;
    }
    if(ct1+ct2==count1)
    	printf("%d ",ct1);
    for(p1=0,s1=0;p1<count2 && s1<count4;p1++,s1++)
    {
    	if(par2[p1]==chd2[s1])
           ct3++;
        else
        	break;
    }
    for(q1=count2-1,r1=count3-1;q1>=0 && r1>=0;q1--,r1--)
    {
    	if(par2[q1]==chd1[r1])
           ct4++;
        else
        	break;
    }
    if(ct3+ct4==count2)
    	printf("%d\n",ct3);
    //overlapping case
    if(ct1+ct2 != count1 || ct3+ct4 != count2 )
      {
      	ct2=count1-ct2+1;
          for(j=ct2;j<=ct1;j++)
          	printf("%d %d\n",j,j);
      }
  }
  else
     printf("INFEASIBLE");     
}
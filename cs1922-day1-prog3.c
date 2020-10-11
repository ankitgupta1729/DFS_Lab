/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :    Let us define a string, comprising English alphabets, as NICE if each vowel within it are equidistant from its successor and predecessor vowel, if applicable.  E.g., “rhythm”, “cool”,“malayalam” are NICE strings.  Write a program to verify whether a given string is NICE or not.You are required to take the string as a direct input without asking for its length. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
      char *str;
      int n,i=0,count=0,j,count1,flag=0,flag1=0,k,count2=0,f,flag2;
    printf("Enter a string: ");
    str=(char*)malloc(sizeof(char));
    while(1)
     {
       scanf("%c",str+i);
       str=(char*)realloc(str,(i+1)*sizeof(char)); 
       if(str[i] =='\n')
           break;
       else
         {
            i++;   
            count++;
         }
      }
    /*printf("string is: ");    
    for(j=0;j<count;j++)
          printf("%c",str[j]);
    printf("\n");*/
    for(i=0;i<count;i++)
        {
             if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u' )
                 {
                     flag=i;
                     break;
                 }
        }
     //printf("flag is %d",flag);
    for(j=i+1;j<count;j++)
        {
             if(str[j]=='a' || str[j]=='e'|| str[j]=='i'|| str[j]=='o'||str[j]=='u' )
                 {
                     flag1=j;
                     break;
                 }
        }
     //printf("flag1 is: %d",flag1);
    count1=flag1-flag;
    //printf("distance is %d",count1);
    f=flag;
    if(count1==0)
        printf("NICE string");
    else
      {
        for(k=flag+1;k<count;k++)
          {
             if(str[k]=='a' || str[k]=='e'|| str[k]=='i'|| str[k]=='o'||str[k]=='u' )
                 {
                       if(k!=f+count1)
                         {
                          flag2=0;
                          break;
                         }
                       else
                          f=k;                     
                 }
          
           }
         if(flag2!=0)
            printf("NICE string");
         else
            printf("not a NICE string");
      }
          
}

/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Suppose a set of strings are given as user input.Write a program to verify whether the ordering of characters in the last string preserves the ordering of characters in all the preceding strings.Note that, conflicts of ordering might exist in the preceding strings.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Assumed there are 5 strings in the set and each of 20 characters
int main()
{ 
char str1[20],str2[20],str3[20],str4[20],str5[20];
printf("Enter strings one by one by pressing enter: "); 
fgets(str1,20, stdin); 
fgets(str2,20, stdin); 
fgets(str3,20, stdin); 
fgets(str4,20, stdin); 
fgets(str5,20, stdin);  
return 0; 
}   



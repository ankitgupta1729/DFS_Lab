/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :    
					           Program Description :   Write a program that uses pointer to structure pointers to assign values to the pointed structure variables by taking inputs from the user.  You are free to choose your own problem to use the said constructs.*/

#include<stdio.h>
typedef struct person
{
    char first_name[50];
    char last_name[50];
    int age;
};

int main()
{
   int i;
   struct person person1;
   struct person *ptr;
   ptr=&person1;
   printf("Enter the first name:");
   fgets(ptr->first_name,50, stdin); 
   printf("Enter the last name:");
   fgets(ptr->last_name,50, stdin); 
   printf("Enter age: ");
   scanf("%d",&(ptr->age));
   printf("%s%s",ptr->first_name,ptr->last_name); 
   printf("age is: %d",ptr->age);
}

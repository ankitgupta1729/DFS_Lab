/* 					           Name                :    Ankit Gupta
                                                   Roll No.            :    22
						   Date                :   
					           Program Description :    Given the (x,y)coordinates of the 3 vertices of a triangle,        determine whether the triangle is scalene, isosceles (but not equilateral), or equilateral. */

#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,x3,y1,y2,y3;
    float d1,d2,d3;
    printf("Enter the co-ordinates of 1st vertex: \n");
    scanf("%f%f", &x1,&y1);
    printf("Enter the co-ordinates of 2nd vertex: \n");
    scanf("%f%f", &x2,&y2);
    printf("Enter the co-ordinates of 3rd vertex: \n");
    scanf("%f%f", &x3,&y3);
    d1= sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    d2= sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    d3= sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    if((d1==d2) && (d2==d3))
        printf("Given triangle is equilateral");
    else if((d1!=d2) && (d2!=d3) && (d1!=d3)) 
        printf("Given triangle is scalene");
    else
        printf("Given triangle is isoscales but not equilateral");   
}

//how to compare floats precisely. if I write Math.abs(float1-float2)<1 then will it work and what is for remaining cases ?

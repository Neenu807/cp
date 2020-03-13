/*To find the value of sin(x) and cos(x)*/

#include<stdio.h>
#include<math.h>
void main()
     {
	 float angle,x;
	 printf("Enter the angle in degree\n");
         scanf("%f",&angle);
         
         x=angle*(3.14159/180);
         printf("sin(%f)=%f  cos(%f)=%f",angle,sin(x),angle,cos(x));
     }

/* program to find the simple interest */

#include<stdio.h>
void main()
  {
        float p,n,r,si ;
        printf("enter the principle,no of years and rate\n");
        scanf("%f%f%f",&p,&n,&r);
        si=p*n*r/100;
        printf(" the simple interest is=%f",si);
  }

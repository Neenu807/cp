/*simple calculator*/
 
#include<stdio.h>
void main()
 { 
    char operator;
    float num1,num2,result;
    printf("enter two numbers");
    scanf("%f%f",&num1,&num2);
    printf("enter an operator:\n1-add \n2-subtract \n3-multiply \n4-divide");
    scanf("%s",&operator)
    
    switch(operator)
        {
         case1:result=num1+num2
         printf("the sum is:%f",result);
         break;

         case2:result=num1-num2
         printf("the difference is:%f",result);
         break;

         case3:result=num1*num2
         printf("the product is:%f",result);
         break;

         case4:result=num1/num2
         printf("the quotient is:%f",result);
         break;
         
         default case:
         printf("invalid operation");
         break;
        }
 }

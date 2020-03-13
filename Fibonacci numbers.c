/* To find first N fibonacci numbers*/
#include<stdio.h>
void main()
   {
	int f1=0,f2=1,f3,n,count=0;

	printf("\n Enter the number of terms: ");
	scanf("%d",&n);

	printf(" First %d Fibonacci numbers are: ", n);
	printf("\n %d \n", f1);
	printf("\n %d \n", f2);

	count=2;

	while(count<n)
	      {
		 F3=f1+f2;
		 count++;

		 printf("%d \n",f3);

		 F1=f2;
		 F2=f3;
	      }

   }

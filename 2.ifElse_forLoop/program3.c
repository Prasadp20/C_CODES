#include <stdio.h>

void main()
{
	// WAP to find min number among 3 number
	
	int number1, number2, number3;

	printf("Enter the first number : ");
	scanf("%d",&number1);

	printf("Enter the second number : ");
	scanf("%d",&number2);	

	printf("Enter the third number : ");
	scanf("%d",&number3);

	if(number1 < number2 && number1 < number3)
	{

		printf("Min number is : %d\n",number1);

	}
	else if(number2 < number3 && number2 < number3)
	{

		printf("Min number is : %d\n",number2);

	}
	else
	{

		printf("Min number is : %d\n",number3);

	}
}

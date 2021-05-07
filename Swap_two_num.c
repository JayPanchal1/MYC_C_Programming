#include<stdio.h>
main()
{
	int X, Y, SUM; // Creating three variables..
	
	// Taking inputs for two numbers from user and storing as X & Y..
	printf("Enter number one as X: ");
	scanf("%d",&X);
	printf("Enter number two as Y: ");
	scanf("%d",&Y);
	
	SUM = X + Y; // Making SUM and storing sum of two numbers in it..
	X = SUM - X; // Subtracting value X from SUM to get Value of Y and Storing it in X..
	Y = SUM - Y; // Similarly for Y..
	
	// Again printing values of two numbers for user clarification..
	printf("\n***** After the Process of Swapping *****");
	printf("\nValue of X : %d",X);
	printf("\nValue of Y : %d",Y);
	
	return 0;
}

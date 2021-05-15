#include<stdio.h>


int Recur_Sum_ofDigits(int n){
	if(n == 0)
		return 0;
	
	return (n % 10 + Recur_Sum_ofDigits(n / 10));
}

int main(){
	int Number,Result;
	
	printf("\nEnter some sequence of number to count sum of them(like 10284) : ");
	scanf("%d",&Number);
	
	Result = Recur_Sum_ofDigits(Number);
	
	printf("\nOutput of process is..");
	printf("\n\nGiven Number : %d",Number);
	printf("\nSum of that Number : %d",Result);	
	return 0;
}

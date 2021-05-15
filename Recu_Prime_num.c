#include<stdio.h>

int Recur_Prime_Num(int n,int i){
	if(i == 1)
		return 1;
	else{
		if(n % i == 0)
			return 0;
		else
			return Recur_Prime_Num(n,i-1);
	}
}

int main(){
	
	int Number,Check;
	
	printf("Enter Number for further process : ");
	scanf("%d",&Number);
	
	Check = Recur_Prime_Num(Number, Number/2);
	if(Check == 1)
		printf("\nGiven Number %d is a PRIME Number..",Number);
	else
		printf("\nGiven Number %d is NOT a PRIME Number..",Number);
	
	return 0;
}

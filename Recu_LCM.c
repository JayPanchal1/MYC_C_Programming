#include<stdio.h>

int Recur_LCM_ofNum(int x,int y){
	
	static int same = 1;
	
	if(same % x == 0 && same % y == 0)
		return same;
	same++;
	Recur_LCM_ofNum(x,y);
	return same;
}

int main(){
	
	int Number_1, Number_2, Result;
	
	printf("\nEnter Number 1 : ");
	scanf("%d",&Number_1); 
	printf("\nEnter Number 2 : ");
	scanf("%d",&Number_2);
	
	Result = Recur_LCM_ofNum(Number_1,Number_2);
	
	printf("\n\nGiven two numbers are %d and %d..",Number_1,Number_2);
	printf("\nLCM of these two numbers is %d.",Result);
	
	return 0;
}

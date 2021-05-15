#include<stdio.h>

int main(){
	
	int Marks;
	
	printf("\nEnter Your Marks : ");
	scanf("%d",&Marks);
	
	if(Marks>=85 & Marks<=100)
		printf("\nWhoooo..Grade A..");
	else if(Marks>=70 & Marks<=84)
		printf("\nGreat Job..Grade B..");
	else if(Marks>=55 & Marks<=69)
		printf("\nGood but need some work..Grade C..");
	else if(Marks>=40 & Marks<=54)
		printf("\nWork Hard..Grade D..");
	else
		printf("Oops..Fail(Grade F).");
			
	return 0;
}

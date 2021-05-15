#include<stdio.h>

int main(){
	
	int choice;
	printf("\n******** Snacks Menu ********");
	printf("\n\nHere we have some trick for our customers..");
	printf("\nCustomer need to choose number between 1 to 5 and they get item and its prize..");
	
	printf("\n\nPlease enter number between 1 to 5 : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nFood Item : Pizza..");
			printf("\nPrize : Rs 350.");
			break;
		case 2:
			printf("\nFood Item : Manchurian..");
			printf("\nPrize : Rs 250.");
			break;
		case 3:
			printf("\nFood Item : Burger(2 combo)..");
			printf("\nPrize : Rs 230.");
			break;
		case 4:
			printf("\nFood Item : Dosa..");
			printf("\nPrize : Rs 150.");
			break;
		case 5:
			printf("\nFood Item : chhole-Bhature..");
			printf("\nPrize : Rs 100.");
			break;
		default:
			printf("\nIts a request that enter valid number..");
	}
	return 0;
}

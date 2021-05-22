#include<stdio.h>

int main(){
	
	int Matrix[3][3],i,j,num = 1; //initializing matrix and some basic needed variables
	int *pointer; //initializing pointer
	
	// asking user for elements and storing them using for loop
	printf("******** Enter elements of Matrix ********\n\n");	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Element %d of matrix at location[%d][%d] : ",num,i,j);
			scanf("%d",&Matrix[i][j]);
			num++;
		}
	}
	
	//assigning pointer to base address of matrix and then we are increamenting to read other values
	pointer = &Matrix[0][0]; 
	printf("\n\n\nMatrix made by using Entered elements :\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",*(pointer+i*3+j));
		}
		printf("\n");
	}
}

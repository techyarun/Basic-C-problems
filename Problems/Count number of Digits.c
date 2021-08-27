//Count the number of digits

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int input,count=0;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&input);
	
	//logic
	while(input>0){
		input=input/10;
		count=count+1;
	}
	
	//print the output
	printf("Total value is : %d",count);
	return 0;
} 

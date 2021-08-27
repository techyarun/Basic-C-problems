//Factorial using function

#include<stdio.h>
#include<conio.h>

//Function declaration
int fact(int input);

int main(){
	//variable declaration
	int firstNum,secondNum;
	
	//user input
	printf("Enter the First number: ");
	scanf("%d",&firstNum);
	
	printf("Enter the second number: ");
	scanf("%d",&secondNum);
	
	//print the result
	printf("\nFactorial of %d is %d",firstNum,fact(firstNum));
	printf("\nFactorial of %d is %d",secondNum,fact(secondNum));
	
	return 0;
}

//Function defnition
int fact(int input){
	int i,factorial=1;
	for(i=1;i<=input;i++){
		factorial=factorial*i;
	}
	return factorial;
}

//Factorial using Recursion

#include<stdio.h>
#include<conio.h>

//Function declaration
int fact(int input);

int main(){
	//variable declaration
	int input;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
	//prints the result
	printf("\nFactorial of %d is %d",input,fact(input));
	
	return 0;
}

//Function defnition
int fact(int input){
	if(input==0){
		return 1;
	}else{
		return input*fact(input-1);

//Factorial of an number

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int input,i,fact=1;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
  //logic
	for(i=1;i<=input;i++){
		fact=fact*i;
	}
	
	//prints the result
	printf("%d! = %d",input,fact);
	return 0;
}

//swap two numbers without using third variable

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int a,b;
	
	//user input
	printf("Enter the number 1: ");
	scanf("%d",&a);
	
	printf("Enter the number 2: ");
	scanf("%d",&b);
	
	//logic
	a=a+b;
	b=a-b;
	a=a-b;
	
	//print the output
	printf("\nAfter swap value of A is: %d",a);
	printf("\nAfter swap value of B is: %d",b);
	
	return 0;
}

//swap numbers using third variable
#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int a,b,temp;
	
	//user input
	printf("Enter the number 1: ");
	scanf("%d",&a);
	
	printf("Enter the number 2: ");
	scanf("%d",&b);
	
	//logic
	temp=a;
	a=b;
	b=temp;
	
	//print the output
	printf("\nAfter swap value of A is : %d",a);
	printf("\nAfter swap value of B is : %d",b);
	return 0;
}

//Check Even or Odd without using if  condition

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	//variable declarations
	char s[10][10]={"Even","Odd"};
	int n;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&n);
	
	//print the output
	printf("%s",s[n%2]);
	return 0;
}

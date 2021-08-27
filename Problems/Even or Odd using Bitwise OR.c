//check Even or odd using Bitwise OR operator

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int n,a;
	
	//user input
	printf("Enter the input: ");
	scanf("%d",&n);
	
	//logic
	a=n|1;

	if(a==n){
		printf("%d is odd number",n);
	}else{
		printf("%d is Even number",n);
	}
	return 0;
}

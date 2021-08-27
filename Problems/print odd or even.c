//print Even or odd

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declarations
	int n;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&n);
	
	//logic
	if(n%2==0){
		printf("%d is Even number",n);
	}else{
		printf("%d is Odd number",n);
	}
	return 0;
}

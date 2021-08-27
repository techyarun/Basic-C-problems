//convert decimal to binary

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//variable declarations
	int input,rem,sum=0;
	
	//user input
	printf("Enter the decimal number: ");
	scanf("%d",&input);
	
	//logic
	while(input>0){
		rem=input%2;
		sum=sum*10+rem;
		input=input/2;
	}
	
	//print the output
	printf("Binary value is :%d",sum);
	return 0;
}

//convert binary to decimal

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//variable declaration
	int input,rem,sum=0,p=0;
	
	//user input
	printf("Enter the binary number: ");
	scanf("%d",&input);
	
	//logic
	while(input>0){
		rem=input%10;
		sum=sum+rem*pow(2,p);
		input=input/10;
		p=p+1;
	}
	//print the output
	printf("Decimal value will be: %d",sum);
		
	return 0;
}

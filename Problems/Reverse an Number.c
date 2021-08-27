//Reverse an number

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int input,m,rev=0,rem;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&input);

	//logic
	m=input;
	while(m>0){
		rem=m%10;
		m=m/10;
		rev=rev*10+rem;
	}
	
	//print the output
	printf("Reverse of %d is : %d",input,rev);
	return 0;
}

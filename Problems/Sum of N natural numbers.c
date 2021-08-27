//Sum of N natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int input,i,sum=0;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
	//logic
	for(i=0;i<=input;i++){
		sum=sum+i;
	}
	
	//print the result
	printf("sum  of %d = %d ",input,sum);
	
	return 0;
}

//Check prime number or not

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,input;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
	//logic
	for(i=2;i<input;i++){
		if(input%i==0){
			break;
		}
	}
	
	//prints the result
	if(i==input){
		printf("\n%d is an PRIME number",input);
	}else{
		printf("\n%d is NOT an PRIME number",input);
	}
	
	return 0;
}

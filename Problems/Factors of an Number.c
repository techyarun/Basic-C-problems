
//Factors of an given number

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declarations
	int i,input;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
	//logic
	for(i=1;i<=input;i++){
		if(input%i==0){
			printf("Factors of %d is %d\n",input,i);
		}
	}
}

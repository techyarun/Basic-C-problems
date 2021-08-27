//Multiplication Table of an given number

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,input;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
	//logic
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",input,i,input*i);
	}
	return 0;
}

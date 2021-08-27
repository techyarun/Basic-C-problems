//check Even or Odd by string and array

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	//variable declarations
	char arr[10];
	
	//user input
	printf("Enter the number: ");
	scanf("%s",&arr);
	
	//logic
	strrev(arr);
	if(arr[0]=='0' || arr[0]=='2' || arr[0]=='4' || arr[0]=='6' || arr[0]=='8'){
		printf("its even ");
	}else{
		printf("Its odd");
	}
	return 0;
}

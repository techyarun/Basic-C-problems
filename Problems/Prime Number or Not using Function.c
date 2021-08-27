//Check Prime number or not [using Function]

#include<stdio.h>
#include<conio.h>

//Function declaration
bool fact(int input);

int main(){
	//variable declaration
	int input;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
	//prints the output
	if(fact(input)){
		printf("%d is a PRIME number",input);
	}else{
		printf("%d is NOT an PRIME number",input);
	}
	
	return 0;
}

//Function defnition
bool fact(int input){
	int i;
	for(i=2;i<input;i++){
		if(input%i==0){
			break;
		}
	}
	if(i==input){
		return true;
	}else{
		return false;
	}
}

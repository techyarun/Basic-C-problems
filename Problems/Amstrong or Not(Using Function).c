//check amstrong or not [using Functions]

#include<stdio.h>
#include<conio.h>

//Function declaration
bool amstrong(int input);

int main(){
	//variable declarations
	int i,input;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&input);
	
	//print the output
	if(amstrong(input)){
		printf("%d is  an amstrong number",input);
	}else{
		printf("%d is not an amstrong number",input);
	}
	return 0;
}

//Function defnition
bool amstrong(int input){
	int m,rem,result=0;
	m=input;
	while(m>0){
		rem=m%10;
		m=m/10;
		result=result+(rem*rem*rem);
	}
	if(result==input){
		return true;
	}else{
		return false;
	}
}

//Sum of digits

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int m,rem,result=0,input;
	
	//user input
	printf("Enter the number(digits) : ");
	scanf("%d",&input);
	
	//logic
	m=input;
	while(m>0){
		rem=m%10;
		m=m/10;
		result=result+rem;
	}
	
	//print the output
	printf("sum of digits of %d is : %d",input,result);
	return 0;
}

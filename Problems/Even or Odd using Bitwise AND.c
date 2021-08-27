//check Even or Odd using Bitwise AND operator

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int n,a;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&n);
	
	//logic
	a=n&1;
	
	if(a==0){
		printf("%d is Even number",n);
	}else{
		printf("%d is Odd number",n);
	}
	return 0;
}

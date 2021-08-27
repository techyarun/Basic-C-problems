//Check Palindrome or not

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declarations
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
	if(rev==input){
		printf("%d is an palindrome ",input);
	}else{
		printf("%d is not an a palindrome",input);
	}
	return 0;
}

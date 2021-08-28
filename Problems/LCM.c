//LCM

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int a,b,mul,temp;
	
	//user input
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	//logic
	mul=a>b?a:b;
	temp=mul;
	
	while(1){
		if(mul%a==0 && mul%b==0){
			break;
		}else{
			mul=mul+temp;
		}
	}
	
	//print the output
	printf("\nLCM is: %d",mul);
	return 0;
}

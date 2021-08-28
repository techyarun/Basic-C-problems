//GCD

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int a,b,i,gcd;
	
	//user input
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	//logic
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}
	
	//print the output
	printf("\nGCD is: %d",gcd);
	return 0;
}

//Fibbonaci series

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,n,a=0,b=1,c;
	
	//user input
	printf("Enter the input number: ");
	scanf("%d",&n);
	
	//logic
	printf("\nThe fibonacci series are: 0 1 ");

	for(i=1;i<=n-2;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}

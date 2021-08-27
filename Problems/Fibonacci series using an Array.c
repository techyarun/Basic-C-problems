//Fibonacci series using an Array

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declarations
	int n,a[20],i;
	a[0]=0,a[1]=1;
	//user input
	printf("Enter the number: ");
	scanf("%d",&n);
	
	//logic
	for(i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	
	//print the output
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

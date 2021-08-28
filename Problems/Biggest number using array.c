//Biggest number using an arrays

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declarations
	int input,i,a[10],big;
	
	//user input
	printf("Enter the input: ");
	scanf("%d",&input);
	
	//logic
	//to get the value
	for(i=0;i<input;i++){
		scanf("%d",&a[i]);
	}
	big=a[0];
	//to check Either it big or Not
	for(i=0;i<input;i++){
		if(a[i]>big){
			big=a[i];
		}
	}
	
	//print the output
	printf("Big number is :%d",big);
	
	return 0;
}

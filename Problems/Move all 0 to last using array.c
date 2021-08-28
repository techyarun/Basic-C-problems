//Move all 0 to the end using an Array

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declarations
	int input,i,a[10],b[10],count=0;
	
	//user input
	printf("Enter the input: ");
	scanf("%d",&input);
	
	//logic
	//to get the value
	for(i=0;i<input;i++){
		scanf("%d",&a[i]);
	}
	//to check Either it big or Not
	for(i=0;i<input;i++){
		if(a[i]!=0){
			b[count]=a[i];
			count++;
		}
	}
	
	for(i=count;i<input;i++){
		b[i]=0;
	}
	
	//print the output
	for(i=0;i<input;i++){
		printf("%d\t",b[i]);
	}
	
	
	return 0;
}

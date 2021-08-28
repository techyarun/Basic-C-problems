//Perfect number

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int input,i,sum=0;
	
	//user input
	printf("Enter any number: ");
	scanf("%d",&input);
	
	//logic
	for(i=1;i<input;i++){
		if(input%i==0){
			sum=sum+i;
		}
	}
	
	//prints the output
	if(input==sum){
		printf("\nIt is an perfect number.");
	}else{
		printf("\nIts not an Perfect number");
	}
	return 0;
}

//printing star pattern --> (model 2)

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int input,i,j;
	
	//user input
	printf("Enter the Number of rows: ");
	scanf("%d",&input);
	
	//logic
	for(i=input;i>=1;--i){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

//printing star pattern --> (model 11)
//Square pattern
<--------------------
	//OUTPUT Value
	//if input=5
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
-------------------->	

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,input;
	
	//user input
	printf("Enter the number of rows: ");
	scanf("%d",&input);
	
	//logic
	for(i=1;i<=input;i++){
		for(j=1;j<=input;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

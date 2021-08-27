//printing star pattern --> (model 4)

<--------------------
	//OUTPUT Value
	//if input=5
	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5
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
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

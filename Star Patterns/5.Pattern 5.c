//printing star pattern --> (model 5)

<--------------------
	//OUTPUT Value
	//if input=5
	1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2 
  1
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
	for(i=input;i>=1;--i){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

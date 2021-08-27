//printing star pattern --> (model 12)
//square pattern
<--------------------
	//OUTPUT Value
	//if input=5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
  1 2 3 4 5
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
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

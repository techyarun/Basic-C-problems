//printing star pattern --> (model 5)

<--------------------
	//OUTPUT Value
	//if input=5
	5 5 5 5 5
  4 4 4 4
  3 3 3
  2 2 
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
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}

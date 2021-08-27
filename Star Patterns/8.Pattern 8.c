//printing star pattern --> (model 8)
//prints in Binary format
<--------------------
	//OUTPUT Value
	//if input=5
	1
  0 1
  0 1 0
  1 0 1 0
  1 0 1 0 1
-------------------->

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,input,print=0;
	
	//user input
	printf("Enter the number of rows: ");
	scanf("%d",&input);
	
	//logic
	for(i=1;i<=input;i++){
		for(j=1;j<=i;j++){
			print++;
			printf("%d ",print%2);
		}
		printf("\n");
	}
	return 0;
}

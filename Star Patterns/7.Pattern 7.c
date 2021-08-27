//printing star pattern --> (model 7)

<--------------------
	//OUTPUT Value
	//if input=5
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
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
			printf("%d ",print);
		}
		printf("\n");
	}
	return 0;
}

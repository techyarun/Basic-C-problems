//printing star pattern --> (model 10)

<--------------------
	//OUTPUT Value
	//if input=5
	a
  b c
  d e f
  g h i j
  k l m n o
-------------------->

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,input,print=96;
	
	//user input
	printf("Enter the number of rows: ");
	scanf("%d",&input);
	
	//logic
	for(i=1;i<=input;i++){
		for(j=1;j<=i;j++){
			print++;
			printf("%c ",print);
		}
		printf("\n");
	}
	return 0;
}

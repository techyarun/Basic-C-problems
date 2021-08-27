//printing star pattern --> (model 9)

<--------------------
	//OUTPUT Value
	//if input=5
	A
  B C
  D E F
  G H I J
  K L M N O
-------------------->	

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,input,print=64;
	
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

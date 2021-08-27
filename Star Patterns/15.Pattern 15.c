//printing star pattern --> (model 15)
//triangle pattern
<--------------------
	//OUTPUT Value
	//if input=5
	       *
	     * * *
	   * * * * *
	 * * * * * * *
       * * * * * * * * *
-------------------->	
  
#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,input,space,temp;
	
	//user input
	printf("Enter the number of rows: ");
	scanf("%d",&input);
	
	//logic
	temp=input;
	for(i=1;i<=input*2;i=i+2){
		for(space=temp;space>=0;space--){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		temp--;
	}
	return 0;
}

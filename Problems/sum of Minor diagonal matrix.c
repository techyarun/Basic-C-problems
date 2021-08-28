//Sum of diagonal matrix(minor matrix)

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,a[3][3],sum=0;
	
	//user input
	printf("Enter the input: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//logic
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i+j==2){
				sum=sum+a[i][j];
			}
		}
	}
	
	//print the output
	printf("\nSum of diagonal matrix is : %d",sum);
	return 0;
}

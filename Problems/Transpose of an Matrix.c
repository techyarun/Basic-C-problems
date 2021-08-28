//Transpose of an matrix

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,a[3][3];
	
	//user input
	printf("Enter the input: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//logic
	printf("\nTranspose of above matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}

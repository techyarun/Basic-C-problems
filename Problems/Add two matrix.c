//Adding two matrix

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,a[3][3],b[3][3],c[3][3];
	
	//user input
	printf("\nEnter the First matrix: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter the Second matrix: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	//logic
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	//print the output
	printf("\nSum of an matrix array is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

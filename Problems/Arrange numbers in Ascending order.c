//Arrange numbers in ascending order

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,j,a[10],input,temp;
	
	//user input
	printf("Enter the input: ");
	scanf("%d",&input);
	
	//logic
	for(i=0;i<input;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<input;i++){
		for(j=i+1;j<input;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//print the output
	printf("\nAfter sorting is: \n");
	for(i=0;i<input;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

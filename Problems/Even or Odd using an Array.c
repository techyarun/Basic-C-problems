//odd or Even using array

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,input,a[5],odd=0,even=0;
	
	//user input
	printf("Enter the input: ");
	scanf("%d",&input);
	
	//logic
	for(i=0;i<input;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<input;i++){
		if(a[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	
	//print the output
	printf("\nodd: %d",odd);
	printf("\nEven: %d",even);
	return 0;
}

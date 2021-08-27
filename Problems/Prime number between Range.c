//Prime  number between a range

#include<stdio.h>
#include<conio.h>

//Function declaration
bool fact(int input);

int main(){
	//variable declaration
	int a,b,i;
	
	//user input
	printf("Enter the first number: ");
	scanf("%d",&a);
	
	printf("Enter the second number: ");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		if(fact(i)){
		printf("%d\t",i);
		}
	}	
	
	return 0;
}

bool fact(int input){
	int i;
	for(i=2;i<input;i++){
		if(input%2==0){
			break;
		}
	}
	if(i==input){
		return true;
	}else{
		return false;
	}
}

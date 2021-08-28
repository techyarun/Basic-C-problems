//reverse an string without strrev() function

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	//variable declaration
	int  len,i;
	char a[10];
	
	//user input
	printf("Enter the input: ");
	scanf("%s",&a);
	
	//logic
	len=strlen(a);
	
	//print the output
	for(i=len-1;i>=0;i--){
		printf("%c",a[i]);
	}
	return 0;
}

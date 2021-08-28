//check string is a palindrome or not

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	//variable declaration
	int i,len,count=0;
	char a[10];
	
	//user input
	printf("Enter the string: ");
	scanf("%s",&a);
	
	//logic
	len=strlen(a);
	
	for(i=0;i<len;i++){
		if(a[i]==a[len-i-1]){
			count++;
		}
	}
	
	if(len==count){
		printf("\nIts palindrome");
	}else{
		printf("\nIts not an palindrome");
	}
	return 0;
}

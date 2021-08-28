//Replace 'e' by 'a'

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	//variable declaration
	char a[10];
	int i,len,count=0;
	
	//user input
	printf("Enter the string: ");
	scanf("%s",&a);
	
	//logic
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]=='e'){
			printf("a");
		}else{
			printf("%c",a[i]);
		}
	}
	
	return 0;
}

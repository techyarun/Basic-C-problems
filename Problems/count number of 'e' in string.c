//count number of 'e' in string

<-------------------
  //if input : welcome
  //   output : 2
------------------->

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
			count++;
		}
	}
	
	//print the logic
	printf("total values of 'e' are: %d ",count);
	return 0;
}

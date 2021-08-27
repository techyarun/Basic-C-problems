//check Amstrong number or not

#include<stdio.h>
#include<conio.h>

int main(){
	//variable declaration
	int i,m,input,mod,result=0;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&input);
	
	//logic
	m=input;
	while(m>0){
		mod=m%10;
		m=m/10;
		result=result+(mod*mod*mod);
	}
	if(result==input){
		printf("%d is a amstrong number",result);
	}else{
		printf("%d is not an amstrong number",result);
	}
	return 0;
}

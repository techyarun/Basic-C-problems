//Amstrong number in given range

#include<stdio.h>
#include<conio.h>

//Function declaration
bool amstrong(int input);

int main(){
	//variable declaration
	int i,a,b;
	
	//user input
	printf("Enter the first number: ");
	scanf("%d",&a);
	
	printf("Enter the second number: ");
	scanf("%d",&b);
	
	//print the output
	for(i=a;i<=b;i++){
		if(amstrong(i)){
			printf("Amstrong number is %d\n",i);
		}
	}
	return 0;
}	
	
//Function defnition
bool amstrong(int input){
	int m,rem,result=0;
	m=input;
	while(m>0){
		rem=m%10;
		m=m/10;
		result=result+(rem*rem*rem);
	}
	if(result==input){
		return true;
	}else{
		return false;
	}
}

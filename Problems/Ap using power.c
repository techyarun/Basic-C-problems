//Ap using power

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//varible declaration
	int sum=0,i,n,p=2;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&n);
	
	//logic
	for(i=1;i<=n;i=i+2){
		sum=sum+i*pow(-1,p);
		p=p+1;
	}
	
	//print the output
	printf("Sum is : %d",sum);
	return 0;
}

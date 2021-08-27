//AP progression(1-3+5-7+9.....+n)

#include<Stdio.h>
#include<conio.h>

int main(){
	//varibale declaration
	int i,n,sum=0,p=2;
	
	//user input
	printf("Enter the number: ");
	scanf("%d",&n);
	
	//logic
	for(i=1;i<=n;i=i+2){
		if(p%2==0){
			sum=sum+i;
		}else{
			sum=sum-i;
		}
		p=p+1;
	}
	
	//print the output
	printf("value is :%d",sum);
	return 0;
}

//printing stars in right angle triangle format

#include<Stdio.h>
#include<conio.h>

int main(){
	//variable declarations
	int i,j,n;
	
	//user input
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	
	//logic
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

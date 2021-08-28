//Perfect number in an range

#include <stdio.h>
#include<conio.h>

int  main(){
	//variable declaration
  int n,i,sum;
  int a,b;
  printf("Input the starting range or number : ");
  scanf("%d",&a);
  printf("Input the ending range of number : ");
  scanf("%d",&b);
  printf("The Perfect numbers within the given range : ");
  for(n=a;n<=b;n++){
    i=1;
    sum = 0;
    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }
    if(sum==n)
      printf("%d ",n);
  }
      printf("\n");
}

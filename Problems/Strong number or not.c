//Strong number
#include<stdio.h>

//function declaration
int factorial(int num );

int main(){
    //variable declaration
    int n,temp,rem,sum=0;
    
    //user input
    printf("Enter the input to check strong number: ");
    scanf("%d",&n);
  
    //logic
    temp=n;
    while(temp){
        rem=temp%10;
        sum=sum+factorial(rem);
        temp=temp/10;
    }
  
    //print the output
    if(n==sum){
        printf("%d is an Strong number",sum);
    }else{
        printf("%d is not an Strong number",sum);
    }
    return 0;
}

//function defnition 
int factorial(int num){
    int fact=1,i;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

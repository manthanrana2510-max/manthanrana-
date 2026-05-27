#include<stdio.h>
main(){
	int num;
	print("enter first number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("enter even\n");
	}
	else{
		printf("enter odd\n");
	}
	if(num>0){
		printf("enter positive number\n");
	}
	if(num<0){
		printf("enter negative number");
	}
	if(num%3==0 && num%5 == 0){
		printf("number is multiple of both 3 and 5\n");
	}
	else{
		printf("number is multiple of both 3 and 5\n");
	}
	return 0;
}
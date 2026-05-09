#include<stdio.h>
main(){
	int num,result;
	printf("enter num");
	scanf("%d",&num);
	result=factorial(num);
	printf("factorial of %d=%d",num,result);
	
	return 0;
}
int factorial(int n){
	int i,fact=1;
	for (i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}

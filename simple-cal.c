
//operators;
#include<stdio.h>
int main(){
	int a,b;
	char op;
	printf("enter first number: ");
	scanf("%d",&a);
	printf("enter opreators(+,-,*,/,%): ");
	scanf("%c",&op);
	printf("enter second number: ");
	scanf("%d",&b);
	if(op == '+'){
		printf("ans=%d",a+b);
	}
	if(op == '-'){
		printf("ans=%d",a-b);
	}
	if(op == '*'){
		printf("ans=%d",a*b);
	}
	if(op == '/'){
		printf("ans=%d",a/b);
	}
	if(op == '%'){
		printf("ans=%d",a%b);
	}
	else{
		printf("invalid op");
	}
	return 0;
}

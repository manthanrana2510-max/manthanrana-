#include<stdio.h>
int main(){
	int a,b,c;
	printf("entre three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c){
		printf("largest number =%d\n");
	}
	else if(b>=a && b>=c){
		printf("largest number =%d\n");
	}
	else{
		printf("largest number =%d\n");
	}
		if(a<=b && a<=c){
		printf("smallest number =%d\n");
	}
	else if(b<=a && b<=c){
		printf("smallest number =%d\n");
	}
	else{
		printf("smallest number =%d\n");
	}
	return 0;
}
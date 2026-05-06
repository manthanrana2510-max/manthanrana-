#include<stdio.h>
main(){
	int num,i,flag=0;
	printf("\n enter number");
	scanf("%d",num);
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
		}
	}
	(flag==0)?printf("\n prime"):printf("\n not prime");
}

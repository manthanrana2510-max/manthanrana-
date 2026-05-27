#include<stdio.h>
main(){
	int num,i,count=0;
	printf("enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i == 0){
			count ++;
		}
	}
	//prime numbers;
	
	if (count == 3){
		printf("prime number\n");
	}
	else{
		printf("not a prime number");
	}
	return 0;
}
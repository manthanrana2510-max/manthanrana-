#include<stdio.h>
main(){
	int i;
	printf("number using for loop:\n");
	for(i = 1;i <= 10;i++){
		printf("%d",i);
	}
	printf("number using while loop:");
	i=1;
	while(i<=10){
		printf("%d",i);
		i++;
	}
	printf("\n numbers using do-while loop:");
	i=1;
	do{
		printf("%d", i);
		i++;
	}
	while(i<=10);
	return 0;
}

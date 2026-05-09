#include<stdio.h>
int main(){
	int number,month;
	printf("enter a month\n");
	scanf("%d",&number);
	if(number %2 == 0){
		printf("%d is even\n",number);
	}
	else{
		printf("%d is odd \n",number);
	}
	printf("enter number of month (1-12): ");
	scanf("%d",month);
	switch(month){
		case 1: 
		printf("january");
		break;
		case 2: 
		printf("feb");
		break;
		case 3: 
		printf("march");
		break;
		case 4: 
		printf("april");
		break;
		case 5: 
		printf("may");
		break;
		case 6: 
		printf("june");
		break;
		case 7: 
		printf("july");
		break;
		case 8: 
		printf("aug");
		break;
		case 9: 
		printf("sep");
		break;
		case 10: 
		printf("oct");
		break;
		case 11: 
		printf("nov");
		break;
		case 12: 
		printf("dec");
		break;
		
	}
	return 0;
}

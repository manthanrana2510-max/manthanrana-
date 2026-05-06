#include<stdio.h>
main(){
	int num,rem,rev=0;
	printf("\n enter num");
	scanf("%d",&num);
	printf("\n original num=%d",num);
	while(num!=0){
	rem =num%10;
	rev =rev*10+rem;
	num= num/10;
	}
	printf("rev=%d",rev);
	return 0;
}

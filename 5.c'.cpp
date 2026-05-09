#include<stdio.h>
main(){
	int a,b;
	printf("enter value ");
	scanf("%d %d",&a,&b);
	printf("\n logical op");
	printf("a && b: %d",a && b);
	printf("a || b :%d",a || b);
	printf("!(A):%D",!a);
	printf("!(b):%D",!b);
	return 0;
}


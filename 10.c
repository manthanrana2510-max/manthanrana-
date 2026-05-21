#include<stdio.h>
int main(){
	int num = 20;
	int *ptr;
	ptr = &num;
	printf("original value of num=%d\n",num);
	*ptr =50;
	printf("modify value of num=%d\n",num);
	return 0;
}

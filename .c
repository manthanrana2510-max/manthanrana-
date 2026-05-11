#include<stdio.h>
main(){
	char pwd[20],i=0;
	printf("\n enter password :");
	scanf("%s",pwd);
	printf("\n password=%s",pwd);
	while(pwd[i] != '\0'){
		i++;
	}
	printf("\n length of str=%d",i);
	
}

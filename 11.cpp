#include<stdio.h>
#include<string.h>
int main(){
	char str1[200],str2[200];
	printf("enter first string: ");
	scanf("%d",str1);
	printf("enter sencond string: ");
	scanf("%d",str2);
	strcat(str1, str2);
	printf("\nconcatenated string= %s",str1);
	printf("\nlength of string =%lu",strlen(str1)); 

	return 0;
}

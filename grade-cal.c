#include<stdio.h>
int main(){
	int marks;
	printf("enter a marks: ");
	scanf("%d",&marks);
	if(marks > 90){
		printf("grade a");
	}
	else if(marks > 75){
		printf("grade b");
	}
	else if(marks > 50){
		printf("grade c");
	}
	else{
		printf("grade d");
	}
	
}
#include<stdio.h>
main(){
	int row,col,space;
	for(row=1;row<=5;row++){
	for(space=4;space>=row;space--){
		printf("- ");	
	}
	for(col=1;col<=row;col++){
		printf("* ");
	}
	printf("\n");
	}
}

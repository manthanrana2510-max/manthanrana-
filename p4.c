#include<stdio.h>
main(){
	int row,col,space;
	for(row=1;row<=5;row++){
	for(col=1;col<=5;col++)
		if(row==1 || row==5 || col==1 || col==5){
			printf("* ")
			
			}
		else{
			printf(" ");
		}
	}

	printf("\n");
}

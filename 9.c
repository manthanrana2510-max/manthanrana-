#include<stdio.h>
int main(){
	int arr[5],i,j;
	int matrix[3][3];
	int sum=0;
	
	
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrix[i][j]);
			sum+=matrix[i][j];
		}
		printf("\n");
	}
	
	printf("\nsum of all element =%d",sum);
	

	return 0;
}
 


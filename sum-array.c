#include<stdio.h>
int main(){
	int arr[100],n,i,sum =0;
	printf("enter how many numbers :");
	scanf("%d",&n);
	printf("enter number :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	printf("sum of array element =%d",sum);
	return 0;
}
#include<stdio.h>
int main(){
   int arr[10];
   int max,min,i;
   printf("enter 10 numbers:\n");
   for(i=1;i<10;i++){
   	sacnf("%d",arr[i]);
   }	
   max = arr[0];
   min = arr[0];
   for (i=1;i<10;i++){
   	if(arr[i]>max){
   		max = arr[i];
	   }
	   if(arr[i]<min){
	   	min = arr[i];
	   }
   }
   printf("maximum number =%d\n",max);
   printf("minimum number =%d\n",min);
   return 0;
}
#include<stdio.h>
main(){
	int i, x1=0, x2=1, ans;
	printf("%d \t %d",x1,x2);
	for(i=1;i<=10;i++){
		ans=x1+x2;
		printf("%d",ans);
		x1=x2;
		x2=ans;
	}
	return 0;
}

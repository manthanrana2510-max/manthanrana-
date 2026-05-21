#include<stdio.h>
int main(){
	FILE *fp;
	char text[100];
	fp=fopen("student.txt","w");
	fprintf(fp,"hello this is a file handling program in c.");
	fclose(fp);
	fp=fopen("student.txt","r");
	fgets(text,100,fp);
	printf("file content;\n%s",text);
	fclose(fp);
	return 0;
}

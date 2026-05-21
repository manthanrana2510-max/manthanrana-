#include<stdio.h>
struct student{
	char name[50];
	int rollno;
	float marks;
};
int main(){
	struct student s[3];
	int i;
	for(i=0;i<3;i++){
		printf("\n enter details of student %d\n",i+1);
		printf("enter name: ");
		scanf("%s",s[i].name);
		
		printf("enter roll num:");
		scanf("%s",s[i].rollno);
		
		printf("enter marks: ");
		sacnf("%f",&s[i].marks);
		
	}
	printf("\n--- student details---\n");
	for(i=0;i<3;i++){
	
		printf("\nstudent %d\n",i+1);
		printf("name: %s\n",s[i].name);
		printf("roll number:%d\n",s[i].rollno);
		printf("marks: %.2f\n",s[i].marks);
	}
	return 0;
}



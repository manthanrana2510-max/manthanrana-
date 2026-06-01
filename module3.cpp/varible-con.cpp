#include<iostream>
using namespace std;
int main(){
	int age =18;
	float height =5.2;
	double salary=25000;
	char grade ='A';
	//constant value that can be changed;
	const int bonus=500;
	//add salary and bonus;
	double totalsalary = salary+bonus;
    //add 0.2 to height;
	float newHEIGHT = height+0.2;
	cout<<"age:"<<age<<endl;
	cout<<"height:"<<height<<endl;
	cout<<"new height:"<<newHEIGHT<<endl;
	cout<<"salary:"<<salary<<endl;
	cout<<"totalsalary:"<<totalsalary<<endl;
	cout<<"grade:"<<grade<<endl;
	
}

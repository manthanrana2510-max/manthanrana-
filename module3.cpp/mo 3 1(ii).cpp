#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	int age;
	cout<<"enter your name :";
	getline(cin,name);
	cout<<"enter your age :";
	cin>>age;
	cout<<"hello,"<<name<<"! you are"<<age<<"year old."<<endl;
}
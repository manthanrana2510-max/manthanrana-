#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number: ";
	cin>>num;
	cout<<"multiple table of "<<num<<":"<<endl;
	for(int i = 1; i<=10; i++){
		cout<<num<<"x"<<i<<"="<<num*1<<endl;
	}
	return 0;
}

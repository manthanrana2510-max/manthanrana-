#include<iostream>
using namespace std;
int main(){
	int a=10;
	float b ='a';
	cout<<"implicit types conversion:"<<endl;
	cout<<"integer value= "<<a<<endl;
	cout<<"float value= "<<b<<endl;
    float x=15.55;
    int y =(int)x;
    cout<<"explicit types conversion:"<<endl;
    cout<<"float value= "<<x<<endl;
     cout<<"integer value after casting="<<y<<endl;

	return 0;
}

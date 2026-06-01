#include<iostream>
using namespace std;
int main(){
	int a=10, b=5;
	cout<<"arithmetic operators: "<<endl;
	cout<<"addition ="<<a + b<<endl;
	cout<<"subraction ="<<a - b<<endl;
	cout<<"multipication ="<<a * b<<endl;
    cout<<"division ="<<a / b<<endl;
    cout<<"modulus ="<<a % b<<endl;
    
    //relational operator
    cout<<"\nrelational operator:"<<endl;
    cout<<"a>b :"<<(a>b)<<endl;
    cout<<"a<b :"<<(a<b)<<endl;
    cout<<"a==b :"<<(a==b)<<endl;
    cout<<"a!=b :"<<(a !=b)<<endl;
    
    //logical
    
    cout<<"\nlogical operator: "<<endl;
    cout<<"(a>5 && b<10):"<<(a>5 && b<10)<<endl;
     cout<<"(a<5 && b>10):"<<(a<5 && b>10)<<endl;
     cout<<"!(a == b):"<<!(a == b)<<endl;

        


	return 0;
	
}

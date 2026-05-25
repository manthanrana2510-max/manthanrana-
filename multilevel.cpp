#include<iostream>
using namespace std;
// child class: public parent class
class A{
	public:
		int a;
		void getA(){
			cout<<"\n enter a";
			cin>>a;
		}
};
class B : public A{
	public:
		int b;
    	void getB(){
		cout<<"\n enter b";
		cin>>b;
	    
		}
};
//child inherit parent
class c: public B{
	public:
		int c;
		void getc(){
			cout<<"\n enter c";
			cin>>c;
		}
		void add(){
			cout<<"\n add="<<a+b+c;
		}
};
 int main(){
	c c1;
	c1.getA();
	c1.getB();
	c1.getc();
	c1.add();
}

#include<iostream>
using namespace std;
// child class: public parent class
class category{
	public:
		int catid;
		char catname[20];
		void getcategory(){
			cout<<"\n enter category id and class";
			cin>>catid>>catname;
		}
};
class product : public category{
	public:
		int pid;
		char pname[20];
		float price;
		
		void getproduct(){
		getcategory();
	
		
			cout<<"\n enter pid pname price";
			cin>>pid>>pname>>price;
		}
		void printproduct(){
			cout<<"\n category name"<<catname;
			cout<<"\n product name="<<pname;
			cout<<"\n price="<<price;
		}
};
 int main(){
	product p1;
	p1.getproduct();
	p1.printproduct();
}

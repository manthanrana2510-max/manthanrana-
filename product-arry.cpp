#include<iostream>
using namespace std;
 class product{
	private:
	
	int pid;
	char pname[20];
	float price;
	int quantity;
	public:
	void getuserinfo(){
		cout<<"\n enter product id: ";
		cin>>pid;
			cout<<"\n enter product pname : ";
		cin>>pname;
			cout<<"\n enter product price: ";
		cin>>price;
			cout<<"\n enter product quantity: ";
		cin>>quantity;
		
	}
	void showuserinfo(){
		cout<<"\n product id="<<pid;
		cout<<"\n product pname="<<pname;
		cout<<"\n product price="<<price;
		cout<<"\n product quantity="<<quantity;
		cout<<"\n total amount =" <<price*quantity;
		cout<<"\n--------------------------------------";
			}
};
int main(){
	product p[2];
	int i;
	for(i=0;i<2;i++){
		cout<<"enter details of product"<<i+1;
		p[i].getuserinfo();
	}
	for(i=0;i<2;i++){
		cout<<"product "<<i+1<<"details";
		p[i].getuserinfo()
	}
		
	
}

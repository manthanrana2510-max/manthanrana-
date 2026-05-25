#include<iostream>
using namespace std;
class amount{
	protected:
		char accno[20];
		char accholder[30];
		char email[30];
		float balance;
		 public:
		 	void getinfo(){
		 		cout<<"\n accno accholder email init bal:";
		 		cin>>accno>>accholder>>email>>balance;
			 }
			 void checkBal(){
			 	cout<<"\n current bal: "<<balance;
			 }
};
class saving : public account:
	public:
		void addintreset(){
			balance += (balance*0.01);
		}
};
class curret : public account{
	public:
		void debitAmount(){
			balance -= (balance*0.01);
		}
};
main(){
	cout<<"\n press1 for saving account";
	cout<<"\n press2 for current account";
	int ch;
	cin>>ch;
	if (ch==1){
		saving s1;
		s1.getinfo();
		s1.addintrest();
		s1.checkBal();
	}
	if(ch==2){
		current c1;
		c1.getinfo();
		c1.debitamount();
		c1.checkbal();
		
	}
	else{
		cout<<"\n invaild choice";
		
	}
}    

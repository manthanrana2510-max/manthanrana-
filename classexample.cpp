#include<iostream>
using namespace std;
class user{
	public:
	//data memeber 
	int uid;
	char username[20];
    char email[30];
    
    public:
    // member function
        void getuserinfo(){
     	cout<<"\n enter userid name email";
     	cin>>uid>>username>>email;
	 }
	 void showuserinfo(){
	 	cout<<"\n userid="<<uid<<"username="<<username;
	 	cout<<"email="<<email;
	 }
	
    
};

main(){
	user u1;
	u1.getuserinfo();
	u1.showuserinfo();
	u1.uid;
}

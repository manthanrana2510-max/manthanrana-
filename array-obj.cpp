#include<iostream>
using namespace std;
class user{
	private:
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
	user u[2];
	int i;
	for(i=0;i<2;i++){
		u[i].getuserinfo();
	}
	for(i=0;i<2;i++){
		u[i].showuserinfo();
	}
}

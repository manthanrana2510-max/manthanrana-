#include<iostream>
using namespace std;
int main(){
	int secretnumber =50;
	int guess;
	cout<<"guess number between 1 and 100"<<endl;
	while (true){
		cout<<"enter your guess";
		cin>>guess;
		if(guess>secretnumber){
		cout<<"too high!try again."<<endl;
		}
		else if(guess>secretnumber){
		cout<<"too low!try again."<<endl;
		}
		else{
			cout<<"congratulation!you gussed the correct number."<<endl;
			
		}
		}
		
		}

	


#include<iostream>
using namespace std;
class maths{
	public:
	//data memeber 
	int x,y;
	//simple constructor
	maths(){
		x=100;
		y=200;
		cout<<"\n defalut con.called";
	}

    //parameterized constructor
    maths(int a, int b){
    	x=a;
    	y=b;
	}
	//copy constructor'
	maths(maths const &m2){
		x= m2.x;
		y= m2.y;
	}
	void display(){
		cout<<"\n x="<<x<<"\t y="<<y;
		}
};

main(){
 maths m1;
 m1.display();
 maths m2(12,31);
 m2.display();
 maths m3 =m2;
 m3.display();
}
